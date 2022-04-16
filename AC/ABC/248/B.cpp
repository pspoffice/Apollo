// https://atcoder.jp/contests/abc248/tasks/abc248_b

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int64_t a, b, k;
  cin >> a >> b >> k;
  int count = 0;
  while (a < b) {
    count += 1;
    a *= k;
  }
  cout << count << '\n';
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
