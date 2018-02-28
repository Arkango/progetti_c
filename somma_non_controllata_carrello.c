#include <stdio.h>
#include <string.h>

/* programma che richiede il valore da sommare e mostra somma finale finchè non si voglia terminare*/

int main()
{

    float somma = 0; //somma finale mostrata

    float prezzo_singolo; //prezzo inserito ogni singola volta

    int scelta = 0; //scelta che l'utente fara ogni volta

    while (scelta != 1)
    {
        puts("\n 0 per sommare un prodotto\n");
        puts("\n 1 per terminare il programma\n");

        scanf("%d",&scelta);
        
        switch (scelta)
        {
            case 0:
                prezzo_singolo = 0; //azzero il prezzo singolo

                printf("Inserisci il costo da sommare\n");
                scanf("%f", &prezzo_singolo);

                somma += prezzo_singolo;

                break;
            case 1:
                printf("\nLa somma finale e': %.2f \n", somma);
                return 0;
                break;
            default:
                puts("\nvalore inserito non corretto\n");
                break;
        }
    }


}
