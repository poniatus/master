#include <stdio.h>
int main() {
  int i=0;
  int liczba;
  int suma=0;
  int koniec;
    printf("Kontynuowac? (1-tak/0-nie)?\n ");
  scanf("%d", &koniec);
  while (koniec == 1) {
    printf("Podaj liczbe: \n");
    scanf("%d", &liczba);
    suma+=liczba;
    printf("Kontynuowac? (1-tak/0-nie)?\n ");
  scanf("%d", &koniec);
}
    printf("Suma wynosi: %d\n", suma);
    return 0;
}
