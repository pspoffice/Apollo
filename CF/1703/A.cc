// https://codeforces.com/contest/1703/problem/A

#include <algorithm>
#include <iostream>
using namespace std;

auto Solve() -> void {
  string s;
  cin >> s;
  std::transform(s.cbegin(), s.cend(), s.begin(),
                 [](unsigned char c) { return std::toupper(c); });
  if (s == "YES") {
    cout << s;
  } else {
    cout << "NO";
  }
  cout << endl;
}

auto main() -> int {
  int t;
  cin >> t;
  while (t--) {
    Solve();
  }
  return 0;
}
