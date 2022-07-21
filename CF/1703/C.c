// https://codeforces.com/contest/1703/problem/C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Output(const int n, const int *arr) {
  for (int i = 0; i < n; ++i) {
    printf("%d ", arr[i]);
  }
  putchar('\n');
}

void Process(const int n, int *arr) {
  for (int i = 0; i < n; ++i) {
    int size;
    scanf("%d ", &size);
    char str[15];
    fgets(str, size + 1, stdin);
    for (int j = 0; j < size; ++j) {
      if (str[j] == 'U') {
        arr[i] -= 1;
      } else {
        arr[i] += 1;
      }
      if (arr[i] < 0) {
        arr[i] += 10;
      }
      arr[i] %= 10;
    }
  }
}

void Solve() {
  // Store Input
  int n;
  scanf("%d ", &n);
  int *a = (int *)malloc((unsigned long)n * sizeof(int));
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  // Processing Data
  Process(n, a);
  // Print Output
  Output(n, a);
  // Clean
  free(a);
}

int main() {
  int t;
  scanf("%d ", &t);
  while (t--) {
    Solve();
  }
  return 0;
}
