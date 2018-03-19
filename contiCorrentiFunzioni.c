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


int fillConti(persona conti[]);
void showInfo (persona conti[],int i , int conto_scelto);
void addOrsub(int OP,int i,persona conti[]);

int main()
{
    float importo;                                       //importo da addebitare o accreditare
    boolean flag = 0;                                    //sentinella per la ricerca
    persona conti[MAX];                                  //conterrà tutti i conti correnti creati
    unsigned int scelta = 1,i,k, conto_scelto = 0; //conterrà il valore dell'operazione selezionata,contatore,contatore,conto scelta per la ricerca;

    i = fillConti(conti); //inserimento conti bancari

    do
    {
        printf("Scelta operazioni da eseguire\n");
        printf("0 mostra tutti\t 1 accredito su conto \t 2 addebito su conto \t 3 mostra saldo su conto\n \t 4 esci \n");
        scanf("%d", &scelta);
        switch (scelta)
        {
        case 0: //stampa tutte le info dei conti
                showInfo (conti,i,0);
            break;
        case 1: //accredito su conto
                addOrsub(1,i,conti);
            break;
        case 2: //addebito su conto
                addOrsub(2,i,conti);
            break;
        case 3: //mostro saldo
            printf("\n Inserire numero conto\n");
            scanf("%u", &conto_scelto);
            showInfo (conti,i,conto_scelto);
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


//riempie array di dati , e ritorna indice
int fillConti(persona conti[]){
  unsigned int scelta = 1,REAL_INDEX=0; //conterrà il valore dell'operazione selezionata;

  do
  { //acquisizione conti
      printf("Inserisci conto corrente %u \n", REAL_INDEX + 1);
      printf("Inserisci numero di conto corrente \n");
      scanf("%d", &conti[REAL_INDEX].num_conto);
      printf("Inserisci nome intestatario del conto corrente \n");
      scanf("%s", &conti[REAL_INDEX].nome);
      printf("Inserisci cognome intestatario del conto corrente \n");
      scanf("%s", &conti[REAL_INDEX].cognome);
      printf("Inserisci saldo del conto corrente \n");
      scanf("%f", &conti[REAL_INDEX].saldo);
      REAL_INDEX++;
      printf("Clicca 0 per terminare l'inserimento , 1 per continuare \n");
      scanf("%d", &scelta);
  } while (scelta != 0 && REAL_INDEX < MAX);

  return REAL_INDEX;
}

//stampa tutti i conti
void showInfo (persona conti[],int i,int conto_scelto){
  boolean flag = 0;
  int k;
  for (k = 0; k < i && flag == 0; k++)
  {
      printf("info del conto %u\n", k + 1);
      printf("numero conto %d\n", conti[k].num_conto);
      printf("intestatario conto %s %s\n", conti[k].nome, conti[k].cognome);
      printf("saldo %.2f\n", conti[k].saldo);
      if (conti[k].num_conto == conto_scelto && conto_scelto != 0)
      {
          flag =1;
          printf("\nsaldo %.2f \n",conti[k].saldo);
      }
  }
  if(flag == 0 && conto_scelto != 0 ) printf("Conto cercato non valido");
}
//aggiunge o rimuove denaro
void addOrsub(int OP,int i,persona conti[]){
  int conto_scelto;
  int k;float importo;
  boolean flag = 0;
  printf("\n Inserire numero conto\n");
  scanf("%u", &conto_scelto);
  for (k = 0; k < i && flag == 0; k++)
  {
      if (conti[k].num_conto == conto_scelto)
      {
          flag = 1;
          switch (OP) {
            case 1:
              printf("\n Inserire importo da accreditare\n");
            break;
            case 2:
              printf("\n Inserire importo da addebitare\n");
            break;
          }

          scanf("%f", &importo);
          if (importo > 0)
          {
            switch (OP) {
              case 1:
                conti[k].saldo += importo;
              break;
              case 2:
                conti[k].saldo -= importo;
              break;
            }

          }
          else
          {
              printf("\nimporto inserito non valido\n");
          }
      }
  }
  if(flag == 0) printf("Conto cercato non valido");
}
