#include <stdio.h>

int main () {
  int a;
  int b;
  int suma = 0;
  printf("Podaj 2 liczby calkowite, gdzie pierwsza jest mniejsza od drugiej:\n");
  scanf("%d", &a);
  scanf("%d", &b);
   if(a<b) {
    while(a <= b ) {
        suma=suma+a;

      a++;
    }
  printf(" Wynik: %d\n", suma);
   }
return 0;
    }
