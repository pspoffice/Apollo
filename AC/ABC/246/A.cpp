// https://atcoder.jp/contests/abc246/tasks/abc246_a

#include <iostream>

using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int x1, y1, x2, y2, x3, y3, x4, y4;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> x3 >> y3;
  // X
  if (x1 == x2) {
    x4 = x3;
  } else if (x2 == x3) {
    x4 = x1;
  } else {
    x4 = x2;
  }
  // Y
  if (y1 == y2) {
    y4 = y3;
  } else if (y2 == y3) {
    y4 = y1;
  } else {
    y4 = y2;
  }
  cout << x4 << ' ' << y4 << '\n';
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
