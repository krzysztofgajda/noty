/*Program oblicza pierwiastek kwadratowy podanej liczby*/

#include <stdio.h>
#include <math.h>

int main()
{
  float a, pierw;

  printf("Podaj liczbe: ");
  scanf("%f", &a);
  if (a < 0) {
    printf("Nie można obliczyć pierwiastka");
  }
  else {
    pierw = sqrt(a);
    printf("Pierwiastek kwadratowy z liczby %f wynosi: %f", a, pierw);
  }

}
