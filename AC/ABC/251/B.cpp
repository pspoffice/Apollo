// https://atcoder.jp/contests/abc251/tasks/abc251_b

#include <iostream>
#include <unordered_map>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  int n;
  cin >> n;
  int answer = 0, p = 0;
  unordered_map<string, int> a;
  for (int i = 1; i <= n; i++) {
    int x;
    string s;
    cin >> s >> x;
    if (!a[s]) {
      if (answer < x) {
        p = i;
        answer = x;
      }
      a[s] = 1;
    }
  }
  cout << p << '\n';
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
