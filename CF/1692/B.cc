// https://codeforces.com/contest/1692/problem/B

#include <iostream>
#include <set>

using namespace std;

auto Solve() {
  int n, x;
  cin >> n;
  set<int> s;
  for (int i = 0; i < n; i++) {
    cin >> x;
    s.insert(x);
  }
  if ((n - s.size()) % 2 == 0) {
    cout << s.size() << '\n';
  } else {
    cout << s.size() - 1 << '\n';
  }
}

auto main() -> int {
  int t;
  cin >> t;
  while (t--) {
    Solve();
  }
  return 0;
}
