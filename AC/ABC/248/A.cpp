// https://atcoder.jp/contests/abc248/tasks/abc248_a

#include <array>
#include <iostream>
#include <string>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  string s;
  cin >> s;
  array<bool, 10> a{0};
  for (int i = 0; i < 9; i++) {
    a[s[i] - '0'] = 1;
  }
  for (int i = 0; i < 10; i++) {
    if (!a[i]) {
      cout << i << '\n';
      return;
    }
  }
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
