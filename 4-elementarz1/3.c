//Napisać program, który robi to co poprzedni program, ale tym razem zamiast
//pętli „for” należy użyć pętli „while”.

#include <stdio.h>

int main() {
  int tabela[] = {1, 2, 4, 6, 12};
  int i = 4;

  while(i >= 0) {
    printf("%d\n",tabela[i]);
    i--;
  }
  return 0;
}
