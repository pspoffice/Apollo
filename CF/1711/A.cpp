// https://codeforces.com/contest/1711/problem/A

#include <bits/stdc++.h>
using namespace std;

auto Solve() -> void {
  int n;
  cin >> n;
  for (int i = 2; i <= n; ++i) {
    cout << i << ' ';
  }
  cout << 1 << '\n';
}

auto main() -> int {
  int t;
  cin >> t;
  while (t--) {
    Solve();
  }
  return 0;
}