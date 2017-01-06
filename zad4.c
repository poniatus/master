#include <stdio.h>

int main () {
int counter;
printf("Ile liczb:");
scanf("%d",&counter);
int tab[counter];
for(int i=0; i<counter; i=i+1) {
printf("Podaj %d liczbe: \n",(i+1));
scanf("%d,&tab[i]");
}
int i=0
return 0;
}
