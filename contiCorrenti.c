#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 
    programma per la gestione di conti correnti 
    con operazioni di info, prelievo ed accredito
    Author : Arcangelo Saracino
    Date : 11/03/2018
*/

#define MAX 100

typedef struct PersonaS
{
    int num_conto;
    char nome[256];
    char cognome[256];
    float saldo;
} persona;

int main()
{
    persona conti[MAX];                //conterrà tutti i conti correnti creati
    unsigned int scelta = 1, i = 0, k; //conterrà il valore dell'operazione selezionata,contatore,contatore;

    do
    { //acquisizione conti
        printf("Inserisci conto corrente %u \n", i + 1);
        printf("Inserisci numero di conto corrente \n");
        scanf("%d", &conti[i].num_conto);
        printf("Inserisci nome intestatario del conto corrente \n");
        scanf("%s", &conti[i].nome);
        printf("Inserisci cognome intestatario del conto corrente \n");
        scanf("%s", &conti[i].cognome);
        printf("Inserisci saldo del conto corrente \n");
        scanf("%f", &conti[i].saldo);
        i++;
        printf("Clicca 0 per terminare l'inserimento , 1 per continuare \n");
        scanf("%d", &scelta);
    } while (scelta != 0 && i < MAX);

    scelta = 1;

    do
    {
        switch (scelta)
        {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        }

    } while (scelta != 0);

    return 0;
}