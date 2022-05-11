// https://codeforces.com/contest/1676/problem/C

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Cost(string &a, string &b) -> int {
  int v = 0;
  for (size_t i = 0; i < a.size(); i++) {
    v += abs(a[i] - b[i]);
  }
  return v;
}

auto Solve() -> void {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  for (int i = 0; i < n; ++i) {
    cin >> s[i];
  }
  int diff = INT_MAX;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      diff = min(diff, Cost(s[i], s[j]));
    }
  }
  cout << diff << "\n";
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) Solve();
  return 0;
}