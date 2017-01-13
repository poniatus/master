#include <stdio.h>
#include <stdlib.h>
//program wyszukuje max i min w tablicy

int main() {
  int tab[5][4]={{1,6,11,-4},{2,7,12,-5},{3,8,-1,-6},{4,9,-2,-7},{5,10,-3,13}};
int max, min;
  for(int i=0; i<5; i++) {
    for(int j=0; j<4; j++){

      min=tab[0][0];
              max=tab[0][0];

      for(i =0; i<5; i++) {
          for(j =0; j<4; j++) {
              if (min>tab[i][j])
                  min=tab[i][j];
                      if (max<tab[i][j])
                              max=tab[i][j]; }}
      printf("%d\n",max);
      printf("%d\n",min);
    }
  }
  return 0;
}
