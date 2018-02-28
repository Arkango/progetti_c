#include <stdio.h>
#include <string.h>

/* programma che per n volte richiede il valore da sommare e mostra somma finale */


int main() {

  float somma = 0; //somma finale mostrata
  
  float prezzo_singolo;//prezzo inserito ogni singola volta

  int i,num_elem = 0; //indice del ciclo

  do{
  	printf("Inserire il numero di elementi da sommare \n");
        scanf("%d",&num_elem);
  }while(num_elem < 1);



  for (i = 0; i < num_elem; i++) {
    prezzo_singolo = 0; //azzero il prezzo singolo

    printf("Inserisci il costo da sommare\n");
    scanf("%f", &prezzo_singolo );

    somma += prezzo_singolo;
  }

  printf("\nLa somma finale e': %.2f \n", somma );
  return 0;
}
