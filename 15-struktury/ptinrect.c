// ptinrect: zwróć 1 jeśli p należy do r, 0 jeśli nie należy

#include <stdio.h>
#include <cmath>

int ptinrect(struct point p, struct rect r) {
  return p.x >= r.ll.x && p.x < r.ur.x
      && p.y >= r.ll.y && p.y < r.ur.y;

int main () {
  if (ptinrect(10, 15) == 1) {
    printf("Należy\n");
  } else {
    printf("Nie należy\n");
  }
}
