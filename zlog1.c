#include <stdio.h>

int main () {
  int a;
  int b;
  printf("Podaj 2 liczby calkowite, gdzie pierwsza jest mniejsza od drugiej:\n");
  scanf("%d", &a);
  scanf("%d", &b);
   if(a<b) {
     printf("%d\n", a);
   a++;
    while(a != b) {
      printf("%d\n", a);
      a++;
    }
    printf("%d\n", a);
   }
return 0;
    }
