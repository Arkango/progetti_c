#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    calcolo massimo di calorie assunte in una settimana da 5 persone usando una matrice
    Author : Arcangelo Saracino
    Date : 12/03/2018
*/

#define ROWS 5
#define COLUMNS 7


static float MAX_TOT = 0;
static float MAX_PEOPLE[ROWS];

void fillMatrix(float calorie[ROWS][COLUMNS]);
void showMax();

int main()
{
  float calorie[ROWS][COLUMNS];

  fillMatrix(calorie);//riempie la matrice con i valori
  showMax();

  return 0;
}

//riempi la matrice con i valori e ricerco i massimi
void fillMatrix(float calorie[ROWS][COLUMNS]){
  int i,j;
  for (i = 0; i < ROWS; i++) {
    printf("Inserire dati persona n. %d\n",i+1 );
    for (j = 0; j < COLUMNS; j++) {
      printf("Calorie del giorno %d\n",j+1 );
      scanf("%f\n",&calorie[i][j] );
      if(MAX_TOT < calorie[i][j] ){ MAX_TOT = calorie[i][j]; } //massimo della matrice
      if(MAX_PEOPLE[i] < calorie[i][j] ){ MAX_PEOPLE[i] = calorie[i][j]; }//massimo per singola persona
    }

  }
}

//mostra i massimi
void showMax(){
  int i;
  for (i = 0; i < ROWS; i++) {
      printf("Calorie massime della persona n. %d : Kcal %.2f \n",i+1 ,MAX_PEOPLE[i]);
  }

  printf("Calorie massime della matrice Kcal %.2f \n",i+1 ,MAX_TOT);

}
