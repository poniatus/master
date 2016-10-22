#include <stdio.h>

int main() {
int a;
int b;
int c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
double outcome1 = (a*b) - ((double)b/(double)c);
int outcome2 = (a*b) - (b%c);
int outcome3 = (a*b) - (c*a) - (b*c);
printf("%f\n",outcome1);
printf("%d\n",outcome2);
printf("%d\n",outcome3);

if ((a>b) && (b>c) && (a>c)) {
   printf("%d, %d %d\n",c,b,a);
 } else if (a>c) {
   printf("%d, %d, %d\n",a,b,c);
 } else {
   printf("%d, %d, %d\n",a,b,c);
 }

return 0;
}
