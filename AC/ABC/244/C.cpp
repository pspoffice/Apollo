// https://atcoder.jp/contests/abc244/tasks/abc244_c

#include <array>
#include <iostream>

using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto main() -> int {
  int n;
  cin >> n;
  array<bool, 2005> a{0};
  while (1) {
    for (int i = 1; i <= 2 * n + 1; i++) {
      if (!a[i]) {
        cout << i << endl;
        a[i] = 1;
        break;
      }
    }
    int q;
    cin >> q;
    if (!q) {
      break;
    }
    a[q] = 1;
  }
  return 0;
}
