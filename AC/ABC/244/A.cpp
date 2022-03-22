// https://atcoder.jp/contests/abc244/tasks/abc244_a

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
  cout << s.back() << endl;
  return 0;
}
