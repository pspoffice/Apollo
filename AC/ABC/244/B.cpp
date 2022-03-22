// https://atcoder.jp/contests/abc244/tasks/abc244_b

#include <iostream>
#include <string>

using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto main() -> int {
  FAST;
  int n;
  cin >> n;
  string s;
  s.reserve(n);
  cin >> s;
  int x(0), y(0), z(0);
  for (const char &c : s) {
    if (c == 'S') {
      if (z == 0) {
        x += 1;
      } else if (z == 1) {
        y -= 1;
      } else if (z == 2) {
        x -= 1;
      } else if (z == 3) {
        y += 1;
      }
    } else {
      z = (z + 1) % 4;
    }
  }
  cout << x << ' ' << y << '\n';
  return 0;
}
