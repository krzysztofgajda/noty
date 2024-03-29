//Napisać funkcję rectinrect sprawdzającą, czy prostokąt jest zawarty wewnątrz prostokąta:

/* rectinrect: zwróć 1 jeśli r1 jest zawarty w r2, 0
   — w przeciwnym przypadku */
//int rectinrect(struct rect r1, struct rect r);


#include <stdio.h>
#include "rect.h"

int main(int argc, char const *argv[]) {

  struct rect r1 = {{1, 1}, {5, 5}};
  struct rect r2 = {{2, 3}, {3, 4}};
  struct rect r3 = {{2, 3}, {6, 6}};

  int ans1 = rectinrect(r2, r1);
  int ans2 = rectinrect(r3, r1);

  printf("r2 w r1: %d\n", ans1);
  printf("r3 w r1: %d\n", ans2);
}
