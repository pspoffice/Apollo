// https://codeforces.com/contest/1692/problem/C

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

constexpr int x = 8;
#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

vector<int> vc;
vector<string> vs;

auto Input() -> void {
  cin >> std::ws;
  vc.resize(x);
  vs.resize(x);
  for (int i = 0; i < x; ++i) {
    cin >> vs[i];
  }
}

auto Output() -> void {
  for (int i = 1; i < x - 1; ++i) {
    if (vc[i] == 1 and vc[i - 1] == 2 and vc[i + 1] == 2) {
      cout << i + 1 << ' ' << vs[i].find('#') + 1 << '\n';
      break;
    }
  }
}

auto Solve() -> void {
  Input();
  for (int i = 0; i < x; ++i) {
    vc[i] = (int)count(begin(vs[i]), end(vs[i]), '#');
  }
  Output();
}

auto main() -> int {
  FAST;
  int t;
  cin >> t;
  while (t--) {
    Solve();
  }
  return 0;
}
