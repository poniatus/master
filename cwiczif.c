#include <stdio.h>

int main() {
  int counter;
  scanf("%d",&counter);
  if ((counter % 2 == 0) && (counter % 3 == 0 ) && (counter % 5 == 0)) {
    printf("%d\nLiczba dzieli sie przez 2,3 i 5\n", counter);
  } else if ((counter % 2 == 0) && (counter % 3 == 0)) {
    printf("%d\nLiczba dzieli sie przez 2 i 3\n", counter);
  } else if ((counter % 2 == 0) && (counter % 5 == 0)) {
    printf("%d\nLiczba dzieli sie przez 2 i 5\n", counter);
  } else if ((counter % 3 == 0) && (counter % 5 == 0)) {
    printf("%d\nLiczba dzieli sie przez 3 i 5\n", counter);
  } else if ((counter % 2 == 0)) {
    printf("%d\nLiczba dzieli sie przez 2\n", counter);
  } else if ((counter % 3 == 0)) {
    printf("%d\nLiczba dzieli sie przez 3\n", counter);
  } else if ((counter % 5 == 0)) {
    printf("%d\nLiczba dzieli sie przez 5\n", counter);
  } else {
      printf("%d\nLiczba nie dzieli się przez 2,3 i 5\n", counter);
    }
return 0;
  }
