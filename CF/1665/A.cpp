// https://codeforces.com/contest/1665/problem/A

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int n;
  cin >> n;
  cout << (n - 3) << ' ' << 1 << ' ' << 1 << ' ' << 1 << '\n';
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
