//massimo tra 2 numeri
#include <stdio.h>

int main(void){
	//definizione variabili
  float numero1,numero2,massimo;
	//richiesta inserimento della prima e seconda variabile
	printf("Inserici primo numero \n");
	scanf("%f",&numero1);

  printf("Inserici secondo numero \n");
  scanf("%f",&numero2);

  //confronto fra i due numeri
  if(numero1 < numero2){
    massimo = numero2;
  }else{
    massimo = numero1;
  }

  if(numero1 == numero2){//caso in cui i numeri inseriti sono uguali
      printf("I numeri inseriti sono uguali\n");
      return 0;
    }

	//messaggio del numero massimo
	printf("\nil massimo tra i due numeri e' : %f",massimo);
	return 0;
}
