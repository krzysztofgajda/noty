#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int t[n];

  printf("Podaj ilość elementów w tablicy: ");
  scanf("%d", &n);

  printf("Podaj %d liczb całkowitych:\n", n);
  for (int i = 0; i <= n; i++) {
    scanf("%d", &t[i]);
  }
  //scanf("%d %d %d %d %d %d\n", &t[0], &t[1], &t[2], &t[3], &t[5], &t[5]);
  //printf("Wczytano: %d %d %d %d %d %d\n", t[5], t[4], t[3], t[2], t[1], t[0]);

  printf("Wczytano do tablicy:\n");

  for ( int i = 0; i <= n; i++) {
    printf("%d \n", t[i]);
  }
}
