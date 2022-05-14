// https://atcoder.jp/contests/abc251/tasks/abc251_a

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  string s;
  cin >> s;
  for (int i = 0; i < 6 / s.size(); i++) {
    cout << s;
  }
  cout << '\n';
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
