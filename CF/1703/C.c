// https://codeforces.com/contest/1703/problem/C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Solve() {
  // Input
  int n;
  scanf("%d ", &n);
  int *a = (int *)malloc((unsigned long)n * sizeof(int));
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  // Process
  for (int i = 0; i < n; ++i) {
    int x;
    scanf("%d ", &x);
    char s[15];
    fgets(s, x + 1, stdin);
    for (int j = 0; j < x; ++j) {
      if (s[j] == 'U') {
        a[i] -= 1;
      } else {
        a[i] += 1;
      }
      if (a[i] < 0) {
        a[i] += 10;
      }
      a[i] %= 10;
    }
  }
  // Output
  for (int i = 0; i < n; ++i) {
    printf("%d ", a[i]);
  }
  free(a);
  putchar('\n');
}

int main() {
  int t;
  scanf("%d ", &t);
  while (t--) {
    Solve();
  }
  return 0;
}
