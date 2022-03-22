// https://codeforces.com/contest/1647/problem/A

#include <iostream>

using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int n;
  cin >> n;
  int x;
  if (n % 3 == 1) {
    x = 1;
  } else {
    x = 2;
  }
  int s = 0;
  while (s != n) {
    cout << x;
    s += x;
    x = 3 - x;
  }
  cout << '\n';
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
