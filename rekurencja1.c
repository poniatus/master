#include <stdio.h>
int suma (int liczba) {
  if (liczba == 1) {
    return liczba;
  } else {
    return liczba+suma(liczba-1);
  }
}
//program liczy sumę liczb od 1 do X
//suma(5) = 5+10=15
//suma(4) = 4+6=10
//...

int main() {
  int liczba;
  scanf("%d", &liczba);
  printf("Wynik: %d\n", suma(liczba));
}
