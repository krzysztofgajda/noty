/*Poniższy – zawierający wiele błędów – program dla podanej z klawiatury liczby M
ma obliczyć najmniejszą liczbę n, taką że

1 + 2 + 3 +...+ n >= M

Popraw wszystkie błędy w tym programie tak, aby poprawiony program
prawidłowo obliczał liczbę n.*/

#include <stdio.h>

int main() {
  int M, suma = 0, i = 1, n;
  printf("Podaj liczbe M: ");
  scanf("%d\n", &M);

  while (suma < M) {
     suma = suma + i;
     i = i + 1;
  }

  n = i + 1;
  printf("Szukane n to: %d\n", n);
  return 0;
}
