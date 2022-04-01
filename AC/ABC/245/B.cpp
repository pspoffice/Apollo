// https://atcoder.jp/contests/abc245/tasks/abc245_b

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  if (v[0] != 0) {
    cout << 0 << '\n';
    return;
  }

  else if (v.back() == n - 1) {
    cout << n << '\n';
    return;
  }

  else {
    for (int i = 0; i < n; i++) {
      if (!binary_search(v.begin(), v.end(), i)) {
        cout << i << '\n';
        return;
      }
    }
  }
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
