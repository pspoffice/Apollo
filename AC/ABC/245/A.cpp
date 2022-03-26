// https://atcoder.jp/contests/abc245/tasks/abc245_a

#include <iostream>
#include <string>

using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  string x;
  if (a < c)
    x = "Takahashi";
  else if (a > c)
    x = "Aoki";
  else {
    if (b <= d)
      x = "Takahashi";
    else
      x = "Aoki";
  }
  cout << x << '\n';
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
