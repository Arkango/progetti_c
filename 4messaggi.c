#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 
    programma che stampa 4 messaggi differenti 
    se l'utente è maggiorenne / minorenne
                    o
    se l'utente è pensionato / lavoratore 

    Author : Arcangelo Saracino
    Date : 03/03/2018
*/

#define MSG_MAGG  "essere maggiornenne comporta molte responsabilita'"
#define MSG_MINO  "divertiti molto "
#define MSG_PENS  "vai a vivere in bulgaria così campi meglio"
#define MSG_LAVO  "prenditi una vacanza"

void controlloValiditaInput(int scelta);

int main()
{

    int scelta; //conterrà la scelta corrente dell'utente

    //menu di presentazione
    printf("Scegli a quale domanda vuoi rispondere \n 0 sei minorenne / maggiorenne \n 1 sei pensionato / lavoratore \n");
    scanf("%d", &scelta);

    controlloValiditaInput(scelta);

    if (scelta)
    { //esegue queste istruzioni per prima scelta di valore 1
        //domanda pensionato / lavoratore
        printf("Sei un pensionato od un lavoratore ? \n 0 (per pensionato) 1 (per lavoratore) \n");
        scanf("%d", &scelta);
        controlloValiditaInput(scelta);

        if (scelta)
        {
            puts(MSG_LAVO);
        }
        else
        {
            puts(MSG_PENS);
        }
    }
    else
    { //esegue queste istruzioni per prima scelta di valore 0
        //domanda minorenne
        printf("Sei un minorenne od un maggiorenne ? \n 0 (per minorenne) 1 (per maggiorenne) \n");
        scanf("%d", &scelta);
        controlloValiditaInput(scelta);

        if (scelta)
        {
            puts(MSG_MAGG);
        }
        else
        {
            puts(MSG_MINO);
        }
    }

    return 0;
}

void controlloValiditaInput(int scelta)
{
    if (scelta != 0 && scelta != 1)
    {
        printf("Valore inserito non valido.");
        exit(1);
    }
}