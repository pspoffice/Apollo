#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool b[26];
char s[55];

void Solve() {
  int n;
  scanf("%d ", &n);
  fgets(s, n + 1, stdin);
  memset(b, 0, sizeof(b));
  for (int i = 0; i < n; ++i) {
    b[s[i] - 'A'] = 1;
  }
  int count = 0;
  for (int i = 0; i < 26; ++i) {
    if (b[i]) {
      count += 1;
    }
  }
  const int p = n - count;
  count *= 2;
  count += p;
  printf("%d\n", count);
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    Solve();
  }
  return 0;
}
