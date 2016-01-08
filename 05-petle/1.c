//Napisz program, który wypisuje kolejne potęgi liczby 2 nie przekraczające 2010.

#include <stdio.h>

int main() {
  int i = 1;

  do {
    printf("%d\n",i);
    i = i * 2;
  }
  while (i < 2010);
}
