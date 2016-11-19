#include <stdio.h>

int main () {
  int a;
  int wynik = 1;
  int i=1;
  printf("Podaj liczbę całkowitą, program obliczy jej silnię:\n");
  scanf("%d", &a);
  while(i<=a){
      wynik=wynik*i;
      i++;
  }
  printf("%d\n", wynik);
  return 0;
}
