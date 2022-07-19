// https://codeforces.com/contest/1692/problem/D

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

class Solution {
public:
  auto Check(const int t) -> bool {
    // a_:_d
    a = t / 600;
    d = t % 10;
    // _b:c_
    b = (t / 60) % 10;
    c = (t / 10) % 6;
    return a == d and b == c;
  }

  auto Solve() -> void {
    string s;
    cin >> s >> q;
    cout << s << '\n';
    x = (s[0] - '0') * 600 + (s[1] - '0') * 60 + (s[3] - '0') * 10 +
        (s[4] - '0');
    output = 0;
    int t = x;
    do {
      if (Check(t)) {
        output += 1;
      }
      t += q;
      t %= (24 * 60);
    } while (t != x);
    cout << output << '\n';
  }

private:
  int q, x;
  int output;
  int a, b, c, d;
};

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  Solution S;
  while (t--) {
    S.Solve();
  }
  return 0;
}
