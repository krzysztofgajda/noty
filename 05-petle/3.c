//Napisz program, który wczyta dwie liczby całkowite a i b (a<b)
//a następnie wypisze wszystkie liczby całkowite pomiędzy a i b.


#include <stdio.h>

int main() {
  int a, b, i;

  printf("Podaj liczbe a: ");
  scanf("%d", &a);

  do {
    printf("Podaj liczbe b(b>a): ");
    scanf("%d", &b);
  }
  while(a >= b);

  for (i = 1; a < b; i++) {
    a = a + i;
    printf("%d ", a);
  }

}
