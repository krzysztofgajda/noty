#include <stdio.h>
int potega (int podstawa, int wykladnik) {
  if (wykladnik == 0) {
    return 1;
  }  else {
    return podstawa * potega(podstawa, wykladnik -1);
  }
}

int main () {
  printf("%d^%d = %d\n", 3, 4, potega(3, 4));
}
