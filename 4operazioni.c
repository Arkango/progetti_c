#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 
    programma che esegue una delle  4 operazioni fondamentali 
    su dati immessi dall'utente ed esegue l'oerpazione selezionata
    Author : Arcangelo Saracino
    Date : 03/03/2018
*/

int main()
{
    int scelta; //conterrà il valore dell'operazione selezionata;
    float primoInput, secondoInput;

    //acquisizione operandi
    printf("Inserire il primo valore sul quale operare \n");
    scanf("%f", &primoInput);

    printf("Inserire il secondo valore sul quale operare \n");
    scanf("%f", &secondoInput);

    printf("Seleziona operazione: 0 (+) , 1 (-) , 2 (*) , 3 (/)  \n");
    scanf("%d", &scelta);

    switch (scelta)
    {
    case 0:
            printf("La somma dei due valori vale: %.3f ",primoInput + secondoInput);
        break;
    case 1:
            printf("La sottrazione dei due valori vale:  %.3f ",primoInput - secondoInput);        
        break;
    case 2:
            printf("La moltiplicazione dei due valori vale:  %.3f ",primoInput * secondoInput);                
        break;
    case 3:
            if(secondoInput == 0)
                printf("Il divisore inserito non è valido");
            else
                printf("La divisione dei due valori vale:  %.3f ",primoInput / secondoInput);                   
        break;

    default:
        printf("il valore inserito non è associato a nessuna operazione");
        break;
    }
    return 0;
}