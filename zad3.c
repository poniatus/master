#include <stdio.h>

 int main () {
   int tab[7]={1,2,3,4,5,6,7};
   int i, min, max, sum, bt=0;
   for (i=0; i<7; i++) {
     scanf("%d", &tab[i]);
   }
   i=1;
 min = tab[0];
 max = tab[0];
 sum = tab[0];
 while (i < 7){
   if (min>tab[i]){
     min = tab[i];
   }
   if (max<tab[i]){
     max = tab[i];
   }
   sum += tab[i];
   if (tab[i]>100){
     bt=bt+1;
   }
   i++;
 }
 printf("Najmniejsza: %d\n", min);
 printf("Największa: %d\n", max);
 printf("Średnia arytmetyczna %f\n", ((double)sum / 7));
 printf("Większe od 100: %d\n", bt);
