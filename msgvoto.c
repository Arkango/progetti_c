#include <stdio.h>
#include <string.h>

/* programma che stampa un messaggio in base alla valutazione ottenuta ad un esame */


int main(){
  int voto = 0;

    printf("Inserisci il tuo voto:\n" );
    scanf("%d",&voto );

    if(voto > 18 ) //ricordati casi limite minore uguale 30
      puts("Promosso");
    else
      puts("Bocciato");


  return 0;
}
