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
   printf("%d, %d %d\n",a,b,c);
 } else if ((c>a) && (b>a) && (c>b)) {
   printf("%d, %d, %d\n",c,b,a);
 } else if ((a<b) && (b>c) && (a>c)) {
   printf("%d, %d, %d\n",b,a,c);
 } else if ((b>c) && (b>a) && (c>a)) {
   printf("%d, %d, %d\n",b,c,a);
 } else if ((a>b) && (a>c) && (c>b)) {
   printf("%d, %d, %d\n",a,c,b);
 } else if ((c>a) && (c>b) && (a>b)) {
   printf("%d, %d, %d\n",c,a,b);
 } else {
   printf("%d, %d, %d\n",a,b,c);
 }

return 0;
}
