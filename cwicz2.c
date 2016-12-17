#include <stdio.h>
int main()
{
//suma z koncem
 int i=0;
 float koniec;
 float x, suma=0;
 printf("podaj znacznik konca \n");
 scanf("%f",&koniec);
 do
 {
 printf("podaj kolejna wartosc %d\n",i+1);
 scanf("%f",&x);
 suma+=x;
 i++;
 } while(x!=koniec);
 printf("suma elementow=%f\n",suma);

 return 0;
 }
