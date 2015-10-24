#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 2; //współczynnik przy x^2
  int b = 3; //współczynik przy x
  int c = 1; //wyraz wolny

  double delta = b * b - 4 * a * c;
  printf("delta=%f\n", delta);
  if (delta > 0) {
    double x1 = (-b - sqrt(delta)) / 2 * a;
    double x2 = (-b + sqrt(delta)) / 2 * a;
    printf("pierwiastki: %f %f\n", x1, x2);
  } else if (delta == 0) {
    double x1 = -b / 2 * a;
    printf("pierwiastek: %f\n", x1);
  } else {
    puts("Brak pierwiastków");
  }



}
