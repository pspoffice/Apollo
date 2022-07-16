// https://atcoder.jp/contests/abc259/tasks/abc259_a

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int n, m, x, t, d;
  cin >> n >> m >> x >> t >> d;
  int r = -1;
  if (m >= x) {
    r = t;
  } else {
    r = t - (x - m) * d;
  }
  cout << r << '\n';
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
