// https://atcoder.jp/contests/abc252/tasks/abc252_d

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve() -> void {
  size_t size = 0;
  cin >> size;
  int l = 0;
  vector<int> v(size);
  unordered_map<int, int> a;
  for (size_t i = 0; i < size; i++) {
    cin >> v[i];
    a[v[i]]++;
    l = max(l, v[i]);
  }
  vector<int> p(l + 1), s(l + 1);
  p[0] = 0;
  s[l] = 0;
  for (size_t i = 1; i <= l; i++) {
    p[i] = p[i - 1] + a[i - 1];
  }
  for (int i = l - 1; i >= 0; i--) {
    s[i] = s[i + 1] + a[i + 1];
  }
  size_t answer = 0;
  for (size_t i = 0; i < size; i++) {
    int x = v[i];
    answer += size_t(p[x]) * s[x];
  }
  cout << answer << endl;
}

auto main() -> int {
  FAST;
  Solve();
  return 0;
}
