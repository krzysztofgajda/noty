//Napisać funkcję rekurencyjną, która wypisuje wszystkie n-wyrazowe ciągi binarne.

#include <stdio.h>

int nwd (int m, int n) {
  if  (m == n) {
    return m;
  } else {
    if (m > n) {
        nwd(m - n, n);
    } else if (m < n) {
        nwd(n - m, m);
    }
  }
}

int main () {
  printf("NWD liczb %d i %d = %d\n", 1989, 867, nwd(1989, 867));
}
