#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main ()
{
int n,m;
printf("Podaj liczbe wierszy:\n");
    scanf("%d", &n);
printf("Podaj liczbe kolumn:\n");
    scanf("%d", &m);

    printf("Tworzenie tablicy %d x %d, liczby generowane sa losowo.\n", n, m);
    printf("\n---------------------------------\n");
    printf("\n");
 int tablica[n][m];

int maksimum = 1000;
int i, j;
   srand(time(NULL));
   for (i = 0; i < n; ++i) {
      for (j = 0; j < m; ++j) {
         tablica[i][j] = rand() % 1000;

         printf("%d ", tablica[i][j]);
      }
      printf("\n");
   }

         printf("\n---------------------------------\n");
{
int min, max, minx, miny, maxx, maxy;
 for (i = 0; i < n; ++i) {
      for (j = 0; j < m; ++j) {

      min=tablica[0][0];
              max=tablica[0][0];

      for (i = 0; i < n; ++i) {
      for (j = 0; j < m; ++j) {
              if (min>tablica[i][j]) {
                  min=tablica[i][j];
                  minx = i+1;
                  miny = j+1;
              }
                      if (max<tablica[i][j]) {
                              max=tablica[i][j];
                              maxx = i+1;
                              maxy = j+1;
                              }}}


      printf("Najwyzsza wartosc w tablicy: %d, wiersz %d, kolumna %d.\n",max, maxx, maxy);
      printf("Najnizsza wartosc w tablicy: %d, wiersz %d, kolumna %d.\n",min, minx, miny);

}
 }


   }

  return 0;
}
