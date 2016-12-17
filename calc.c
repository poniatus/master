#include <stdio.h>
int wczytaj_liczbe_a();
int wczytaj_liczbe_b();
int podaj_operacje();
int policz(int dzialanie, int a, int b);

int wczytaj_liczbe_a(){
  int a;
  printf("Podaj pierwsza liczbe:");
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
  printf("Podaj typ operacji, 1 - dodawanie, 2 - odejmowanie, 3 - mnozenie ");
  scanf("%d", &dzialanie);
  return dzialanie;
}
int policz(int dzialanie, int a, int b){
  int wynik;
  switch (dzialanie) {
    case 1: wynik=a+b;break;
    case 2: wynik=a-b;break;
    case 3: wynik=a*b;break;
  }
  return wynik;
}

void wypisz_wynik (int wynik) {
  printf("Wynik: %d\n", wynik);
}

int main () {
  int a = wczytaj_liczbe_a();
  int b = wczytaj_liczbe_b();
  int dzialanie = podaj_operacje();
  int wynik = policz(dzialanie, a ,b);
  wypisz_wynik(wynik);
  return 0;
}
