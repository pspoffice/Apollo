// https://codeforces.com/contest/1665/problem/B

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

array<int, 100005> v;

auto Solve() -> void {
  int n;
  cin >> n;
  map<int, int> omap;
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
    omap[v[i]] += 1;
  }
  int a = 0;
  for (const auto &[p, q] : omap) {
    a = max(a, q);
  }
  int d = 0, z = 0;
  while (a < n) {
    d = min(n - a, a);
    z += 1 + d;
    a += d;
  }
  cout << z << '\n';
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
