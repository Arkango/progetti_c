#include <stdio.h>
#include "mathema.h"


int main()
{
    int scelta = 0; //conterrà il valore dell'operazione selezionata;
    int minimo;
    int primoInput, secondoInput;
    float inputSpeciale;

    while (scelta != 8)
    {

        printf("Seleziona operazione: 0 (+) , 1 (-) , 2 (*) , 3 (/) , 4 MIN , 5 MAX , 6 AVG , 7 absolute , 8 esci  \n");
        scanf("%d", &scelta);

        if (scelta != 7 && scelta != 8)
        {
            //acquisizione operandi
            printf("Inserire il primo valore sul quale operare \n");
            scanf("%d", &primoInput);

            printf("Inserire il secondo valore sul quale operare \n");
            scanf("%d", &secondoInput);
        }
        else if (scelta == 7)
        {
            //acquisizione operandi
            printf("Inserire il  valore sul quale operare \n");
            scanf("%f", &inputSpeciale);
        }

        switch (scelta)
        {
        case 0:
            printf("La somma dei due valori vale: %d ", primoInput + secondoInput);
            break;
        case 1:
            printf("La sottrazione dei due valori vale:  %d ", primoInput - secondoInput);
            break;
        case 2:
            printf("La moltiplicazione dei due valori vale:  %d ", primoInput * secondoInput);
            break;
        case 3:
            if (secondoInput == 0)
                printf("Il divisore inserito non è valido");
            else
                printf("La divisione dei due valori vale:  %d ", primoInput / secondoInput);
            break;
        case 4:
            if(min(primoInput, secondoInput)){
                minimo = primoInput;
            }else{
                minimo = secondoInput;
            }
            printf("Minimo fra i due numeri:  %d ", minimo);
            break;
        case 5:
            if(min(primoInput, secondoInput)){
                minimo = secondoInput;
            }else{
                minimo = primoInput;
            }
            printf("Massimo fra i due numeri:  %d ", minimo);
            break;
        case 6:
            printf("Media fra i due numeri:  %f ", avg(primoInput, secondoInput));
            break;
  case 7:
            printf("Valore assoluto:  %f ", val_absolute(inputSpeciale));
            break;
        case 8:
            return 0;
            break;

        default:
            printf("il valore inserito non è associato a nessuna operazione");
            break;
        }
    }

    
}