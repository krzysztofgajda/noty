#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, min, max;
  int t[n];

  printf("Podaj ilość elementów w tablicy: ");
  scanf("%d", &n);

  printf("Podaj %d liczb całkowitych:\n", n);

  for (i = 0; i <= n; i++) {
    scanf("%d", &t[i]);
    if (i == 0) {
      max = t[i];
      min = t[i];
    }
    else {
      if (t[i] > max) {
        max = t[i];
      }
      else if (t[i] < min) {
        min = t[i];
      }
    }

  }

  printf("max=%d", max);
  printf("min=%d", min);
}
