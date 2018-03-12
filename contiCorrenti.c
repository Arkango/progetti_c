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

typedef enum { FALSE,
               TRUE } boolean;

typedef struct PersonaS
{
    int num_conto;
    char nome[256];
    char cognome[256];
    float saldo;
} persona;

int main()
{
    float importo;                                       //importo da addebitare o accreditare
    boolean flag = 0;                                    //sentinella per la ricerca
    persona conti[MAX];                                  //conterrà tutti i conti correnti creati
    unsigned int scelta = 1, i = 0, k, conto_scelto = 0; //conterrà il valore dell'operazione selezionata,contatore,contatore,conto scelta per la ricerca;

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

    do
    {
        printf("Scelta operazioni da eseguire\n");
        printf("0 mostra tutti\t 1 accredito su conto \t 2 addebito su conto \t 3 mostra saldo su conto\n \n 4 esci");
        scanf("%d", &scelta);
        flag =0 ; //resetto il flag
        switch (scelta)
        {
        case 0: //stampa tutte le info dei conti
            for (k = 0; k < i; k++)
            {
                printf("info del conto %u\n", k + 1);
                printf("numero conto %d\n", conti[k].num_conto);
                printf("intestatario conto %s %s\n", conti[k].nome, conti[k].cognome);
                printf("saldo %.2f\n", conti[k].saldo);
            }
            break;
        case 1: //accredito su conto
            printf("\n Inserire numero conto\n");
            scanf("%u", &conto_scelto);
            for (k = 0; k < i && flag == 0; k++)
            {
                if (conti[k].num_conto == conto_scelto)
                {
                    flag = 1;
                    printf("\n Inserire importo da accreditare\n");
                    scanf("%f", &importo);
                    if (importo > 0)
                    {
                        conti[k].saldo += importo;
                    }
                    else
                    {
                        printf("\nimporto inserito non valido\n");
                    }
                }
            }
            if(flag == 0) printf("Conto cercato non valido");
            break;
        case 2: //addebito su conto
            printf("\n Inserire numero conto\n");
            scanf("%u", &conto_scelto);
            for (k = 0; k < i && flag == 0; k++)
            {
                if (conti[k].num_conto == conto_scelto)
                {
                    flag = 1;
                    printf("\n Inserire importo da addebitare\n");
                    scanf("%f", &importo);
                    if (importo > 0)
                    {
                        conti[k].saldo -= importo;
                    }
                    else
                    {
                        printf("\nimporto inserito non valido\n");
                    }
                }
            }
            if(flag == 0) printf("Conto cercato non valido");
            break;
        case 3: //mostro saldo
            printf("\n Inserire numero conto\n");
            scanf("%u", &conto_scelto);
            for (k = 0; k < i && flag == 0; k++)
            {
                if (conti[k].num_conto == conto_scelto)
                {
                    flag =1;
                    printf("\nsaldo %.2f \n",conti[k].saldo);
                }
            }
            if(flag == 0) printf("Conto cercato non valido");
            break;
        case 4: //esco
            break;
        default:
            printf("opzione non riconosciuta\n");
            break;
        }

    } while (scelta != 4);

    return 0;
}
