#include <stdio.h>
#include "operazioni-studente.h"

#define MAX_ESAMI 20
#define MATRCIOLA 8

typedef struct{

    char matricola[MATRCIOLA];
    esami piano[MAX_ESAMI];
    esami esami[MAX_ESAMI];

}student;

typedef struct{

    char nome[255];
    int cfu;
    int voto;

}esami;

int main(){

    int scelta = 0; //conterrà il valore dell'operazione selezionata;

    while (scelta != 4)
    {

        printf("Seleziona operazione: 0 V.esame , 1 Media Esami , 2 Voto Max Esami , 3 calcolo esami restanti , 4 esci  \n");
        scanf("%d", &scelta);


        switch (scelta)
        {
        case 0: //verbalizzazione esame

            break;
        case 1: //media esami
            break;
        case 2: //voto max esami
            break;
        case 3://n esami restanti
            
            break;
        case 4:
            return 0;
            break;
        default:
            printf("il valore inserito non è associato a nessuna operazione");
            break;
        }
    }

}