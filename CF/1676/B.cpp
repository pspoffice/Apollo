// https://codeforces.com/contest/1676/problem/B

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int x;
  cin >> x;
  vector<int> v(x);
  for (int i = 0; i < x; i++) {
    cin >> v[i];
  }
  const int a = *min_element(v.begin(), v.end());
  int64_t c = 0, t = 0;
  for (int i = 0; i < x; i++) {
    t = v[i];
    c += (t - a);
  }
  cout << c << '\n';
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) {
    Solve();
  }
  return 0;
}