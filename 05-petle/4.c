/*Napisz program, który wyliczy sumę liczb naturalnych od 1 do liczby n podanej
przez użytkownika. Kiedy użytkownik poda liczbę mniejszą niż 1, to program
powinien wypisać stosowny komunikat o błędzie.*/

#include <stdio.h>

int main() {
  int suma = 0, i, n;

  do {
    printf("Podaj ilość liczb (n >= 1): ");
    scanf("%d", &n);
  }
  while(n < 1);

  for (i = 1; i <= n; i++) {
    suma = suma +i;
  }

  printf("Suma = %d\n", suma);

}
