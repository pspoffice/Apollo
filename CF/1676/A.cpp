// https://codeforces.com/contest/1676/problem/A

#include <array>
#include <iostream>
using namespace std;

array<int, 6> arr;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  string s;
  cin >> s;
  for (int i = 0; i < 6; i++) {
    arr[i] = s[i] - '0';
  }
  bool x = 0;
  if (arr[0] + arr[1] + arr[2] == arr[3] + arr[4] + arr[5]) {
    x = 1;
  }
  cout << (x ? "YES" : "NO") << '\n';
}

auto main() -> int {
  FAST;
  int x;
  cin >> x;
  while (x--) {
    Solve();
  }
  return 0;
}