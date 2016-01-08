//Napisać program obliczający silnię z podanej, niezbyt dużej, liczby naturalnej.


#include <stdio.h>

int main() {
  int x;


  printf("Podaj liczbe naturalna: \n");
  scanf("%d", &x);

  for (int i = x - 1; i >= 1; i--) {
    x = x * i;
  }

  printf("Silnia = %d\n", x);

}
