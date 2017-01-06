#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char plansza[3][3];
char sprawdz(void);
void rozpocznij(void);
void ruch_gracza(void);
void wczytaj_ruch_ai(void);
void wyswietl_plansze(void);

int main(void)

{

char done;
printf("KOLKO I KRZYZYK\n");

printf("TWOJ ZNAK TO KRZYZYK\n");

done = ' ';

rozpocznij();

do {

wyswietl_plansze();
ruch_gracza();
done = sprawdz();
if(done!= ' ') break;
wczytaj_ruch_ai();
done = sprawdz();

} while(done== ' ');

if(done=='X') printf("WYGRANA\n");
else printf("PRZEGRANA\n");

wyswietl_plansze();

return 0;

}


void rozpocznij(void)

{

int a, b;
for(a=0; a<3; a++)
for(b=0; b<3; b++) plansza[a][b] = ' ';

}

void ruch_gracza(void)

{

int x, y;

printf("Podaj wiersz i kolumne:\n");

scanf("%d%*c%d", &x, &y);

x--; y--;

if(plansza[x][y]!= ' '){

printf("Blad wyboru, podaj jeszcze raz:\n");

ruch_gracza();

}

else plansza[x][y] = 'X';

}

void wczytaj_ruch_ai(void)

{
/*int a,b;
int zarodek;
  time_t tt;
  zarodek = time(&tt);
  srand(zarodek);
    a = 1 + rand() % 3;
    b = 1 + rand() % 3;

if(plansza[a][b]!=' ')
        wczytaj_ruch_ai();

*/
/*
Kod powyzej crashuje mi program ;/
    */


int a, b;
for(a=0; a<3; a++){
for(b=0; b<3; b++)
if(plansza[a][b]==' ') break;
if(plansza[a][b]==' ') break;


}

if(a*b==9) {
printf("REMIS\n");
exit(0);

}

else

plansza[a][b] = 'O';

}

void wyswietl_plansze(void)

{

int t;

for(t=0; t<3; t++) {

printf(" %c | %c | %c ",plansza[t][0],

plansza[t][1], plansza[t][2]);

if(t!=2) printf("\n---|---|---\n");

}

printf("\n");

}

char sprawdz(void)

{

int a;

for(a=0; a<3; a++)

if(plansza[a][0]==plansza[a][1] &&

plansza[a][0]==plansza[a][2]) return plansza[a][0];

for(a=0; a<3; a++)

if(plansza[0][a]==plansza[1][a] &&

plansza[0][a]==plansza[2][a]) return plansza[0][a];

if(plansza[0][0]==plansza[1][1] &&

plansza[1][1]==plansza[2][2])

return plansza[0][0];

if(plansza[0][2]==plansza[1][1] &&

plansza[1][1]==plansza[2][0])

return plansza[0][2];

return ' ';

}
