// https://codeforces.com/contest/1703/problem/E

#include <bits/stdc++.h>

class Solution {
public:
  auto Input() -> void {
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
      std::cin >> a[i];
    }
  }

  void Rotate(const std::array<std::string, 100> &p,
              std::array<std::string, 100> &q) {
    for (int i = 0; i < n; ++i) {
      std::string s;
      for (int j = 0; j < n; ++j) {
        s += p[j][i];
      }
      std::reverse(s.begin(), s.end());
      q[i] = s;
    }
  }

  auto Process() -> void {
    Rotate(a, b);
    Rotate(b, c);
    Rotate(c, d);
  }

  auto Output() const -> void {
    int count = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        std::string s = {a[i][j], b[i][j], c[i][j], d[i][j]};
        const int p = (int)std::count(s.begin(), s.end(), '0');
        const int q = (int)std::count(s.begin(), s.end(), '1');
        count += std::min(p, q);
      }
    }
    std::cout << count / 4 << '\n';
  }

  auto Solve() -> void {
    Input();
    Process();
    Output();
  }

private:
  int n{0};
  std::array<std::string, 100> a, b, c, d;
};

auto main() -> int {
  int t;
  std::cin >> t;
  Solution S;
  while (t--) {
    S.Solve();
  }
  return 0;
}