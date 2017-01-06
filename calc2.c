#include <stdio.h>
int wczytaj_liczbe_a();
int wczytaj_liczbe_b();
int podaj_operacje();
int policz(int dzialanie, int a, int b);

int wczytaj_liczbe_a(){
  int a;
  printf("Podaj pierwsza liczbe: ");
  scanf("%d", &a);
  return a;
}

int wczytaj_liczbe_b(){
  int b;
  printf("Podaj druga liczbe: ");
  scanf("%d", &b);
  return b;
}

int podaj_operacje(){
  int dzialanie;
  printf("Podaj typ operacji, 1 - dodawanie, 2 - odejmowanie, 3 - mnozenie. Co wybierasz?: ");
  scanf("%d", &dzialanie);
  return dzialanie;
}
int policz(int dzialanie, int a, int b){
  int wynik;
if (dzialanie == 1) {
  wynik=a+b;
  printf("Wynik: %d\n", wynik);
} else if (dzialanie == 2) {
  wynik=a-b;
  printf("Wynik: %d\n", wynik);
} else if (dzialanie == 3) {
  wynik=a/b;
  printf("Wynik: %d", wynik);
}
}

int main () {
  int a = wczytaj_liczbe_a();
  int b = wczytaj_liczbe_b();
  int dzialanie = podaj_operacje();
  int wynik = policz(dzialanie, a ,b);
  return 0;
}
