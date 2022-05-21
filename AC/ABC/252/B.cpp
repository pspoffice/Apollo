// https://atcoder.jp/contests/abc252/tasks/abc252_b

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int n, k;
  cin >> n >> k;
  vector<int> a(n + 1);
  vector<int> b(k + 1);
  for (size_t i = 1; i < a.size(); i++) {
    cin >> a[i];
  }
  for (size_t i = 1; i < b.size(); i++) {
    cin >> b[i];
  }
  const int p = *max_element(a.begin(), a.end());
  vector<int> c;
  for (size_t i = 1; i < a.size(); i++) {
    if (a[i] == p) {
      c.push_back(i);
    }
  }
  for (size_t i = 1; i < b.size(); i++) {
    if (binary_search(c.begin(), c.end(), b[i])) {
      cout << "Yes" << '\n';
      return;
    }
  }
  cout << "No" << '\n';
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
