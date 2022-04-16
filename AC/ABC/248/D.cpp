// https://atcoder.jp/contests/abc248/tasks/abc248_d

#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int n;
  cin >> n;
  vector<int> v(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  unordered_map<int, vector<int>> c;
  for (int i = 1; i <= n; i++) {
    c[v[i]].push_back(i);
  }
  int q;
  cin >> q;
  while (q--) {
    int l, r, x;
    cin >> l >> r >> x;
    const auto a = int(lower_bound(c[x].begin(), c[x].end(), l) - c[x].begin());
    const auto b = int(upper_bound(c[x].begin(), c[x].end(), r) - c[x].begin());
    cout << b - a << '\n';
  }
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
