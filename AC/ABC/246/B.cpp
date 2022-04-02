// https://atcoder.jp/contests/abc246/tasks/abc246_b

#include <cmath>
#include <iostream>

using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int x, y;
  cin >> x >> y;
  double theta = atan2(y, x);
  cout << cos(theta) << ' ' << sin(theta) << '\n';
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
