// https://codeforces.com/contest/1692/problem/A

#include <iostream>

using namespace std;

auto Solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int count = 0;
  if (b > a) {
    count += 1;
  }
  if (c > a) {
    count += 1;
  }
  if (d > a) {
    count += 1;
  }
  cout << count << '\n';
}

auto main() -> int {
  int t;
  cin >> t;
  while (t--) {
    Solve();
  }
  return 0;
}
