// https://atcoder.jp/contests/abc250/tasks/abc250_a

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int h, w, r, c;
  cin >> h >> w >> r >> c;
  int count = 0;
  if (c != 1) {
    ++count;
  }
  if (c != w) {
    ++count;
  }
  if (r != 1) {
    ++count;
  }
  if (r != h) {
    ++count;
  }
  cout << count << '\n';
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
