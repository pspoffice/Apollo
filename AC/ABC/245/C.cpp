// https://atcoder.jp/contests/abc245/tasks/abc245_c

#include <deque>
#include <iostream>
#include <vector>

using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  // Input
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  // Dynamic Programming
  deque<bool> dp(n, 0), ep(n, 0);
  dp[0] = ep[0] = 1;
  for (int i = 1; i < n; i++) {
    if (dp[i - 1]) {
      if (abs(a[i - 1] - a[i]) <= k)
        dp[i] = true;
      if (abs(a[i - 1] - b[i]) <= k)
        ep[i] = true;
    }
    if (ep[i - 1]) {
      if (abs(b[i - 1] - a[i]) <= k)
        dp[i] = true;
      if (abs(b[i - 1] - b[i]) <= k)
        ep[i] = true;
    }
  }
  // Output
  if (dp[n - 1] || ep[n - 1])
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
