//sconti multipli , uno solo deciso dall'utente sarà calcolato
#include <stdio.h>

int main(void){
	//definizione variabili
  float importo,sconto;
  int scelta;
	//richiesta inserimento della prima e seconda variabile
	printf("Inserici importo \n");
	scanf("%f",&importo);

  printf("Inserici importo \n");
  printf("Inserici importo \n");
  printf("Inserici importo \n");
  printf("Inserici importo \n");
  printf("Inserici importo \n");

  printf("Inserici scelta \n");
  scanf("%d",&scelta);

  switch (scelta) {
    case 0:
      return 0;
      break;
    case 1:
        sconto = importo*0.1;
      break;
    case 2:
    sconto = importo*0.2;

      break;
    case 3:
    sconto = importo*0.3;

      break;
    case 4:
    sconto = importo*0.4;

      break;
  }
	//messaggio del numero massimo
	printf("\nlo socnto e' : %f",sconto);
	return 0;
}
