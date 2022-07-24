// https://codeforces.com/contest/1703/problem/D

#include <bits/stdc++.h>
using namespace std;

auto Solve() -> void {
  int n;
  cin >> n;
  set<string> s;
  vector<string> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
    s.insert(v[i]);
  }
  for (const auto &str : v) {
    bool k = false;
    for (int i = 1; i < (int)str.size(); ++i) {
      const string a = string(str.begin(), str.begin() + i);
      const string b = string(str.begin() + i, str.end());
      if (s.find(a) != s.end() and s.find(b) != s.end()) {
        k = true;
        break;
      }
    }
    cout << (k ? 1 : 0);
  }
  cout << '\n';
}

auto main() -> int {
  int t;
  cin >> t;
  while (t--) {
    Solve();
  }
  return 0;
}
