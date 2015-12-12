#include <stdio.h>

int nwd(int a,int b)
{
    int c;                    // Tworzymy zmienną c o typie int
    while(b != 0)             // Tworzymy pętlę działającą gdy b ≠ 0
    {
        c = a % b;              // Zmienna c przyjmuje wartość a modulo b
        a = b;                // Przypisujemy b do a
        b = c;                // Przypisujemy c do b
    }
    return a;                 // Zwracamy a, czyli żądane NWD(a,b)
}

int main () {
  printf("NWD = %d\n", nwd(1989, 867));
}
