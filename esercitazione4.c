#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define STRING " %[^\n]s"
#define MAX 1

typedef struct {
	char nome[30];
	char cognome[30];
	int matricola;
	int eta;
	int reddito;
	int altezza;
} persona_t;


int p_compare(const persona_t *persona1, const persona_t *persona2){
	int status = 0;

	//Confronta prima per eta'
	if(persona1->eta > persona2->eta){
		status = 1;
	} else if (persona1->eta == persona2->eta){
		status = 0;
	} else {
		status = -1;
	}

	if(status!=0)
		return status;

	//Confronta per reddito
	if(persona1->reddito > persona2->reddito){
		status = 1;
	} else if (persona1->reddito == persona2->reddito){
		status = 0;
	} else {
		status = -1;
	}

	if(status!=0)
		return status;

	//Confronta per cognome
	if(strcmp(persona1->cognome, persona2->cognome)>0){
		status = 1;
	} else if (strcmp(persona1->cognome, persona2->cognome)==0){
		status = 0;
	} else {
		status = -1;
	}

	if(status!=0)
		return status;

	//Confronta per nome
	if(strcmp(persona1->nome, persona2->nome)>0){
		status = 1;
	} else if (strcmp(persona1->nome, persona2->nome)==0){
		status = 0;
	} else {
		status = -1;
	}

	if(status!=0)
			return status;

	//Confronta per matricola
	if(persona1->matricola > persona2->matricola){
		status = 1;
	} else if (persona1->matricola == persona2->matricola){
		status = 0;
	} else {
		status = -1;
	}

	return status;
}

int scanArray(persona_t *persone){
	bool end = false;
	char choice;
	int i = 0;
	int size = MAX;
	do {
		printf("\nInserisci dati persona %d\n", i+1);
		printf("Nome: ");
		scanf(STRING, persone[i].nome);
		printf("Cognome: ");
		scanf(STRING, persone[i].cognome);
		printf("Matricola: ");
		scanf("%d", &persone[i].matricola);
		printf("Eta': ");
		scanf("%d", &persone[i].eta);
		printf("Reddito: ");
		scanf("%d", &persone[i].reddito);
		printf("Altezza: ");
		scanf("%d", &persone[i].altezza);

		do{
			//fflush(stdin);
			printf("\nContinuare? [S/N]: ");
			scanf("%c", choice);
			choice=toupper(choice);
		} while(choice!='S' && choice!='N');
		if (choice=='N')
			end=true;
	i++;
	if(i>=size){
		size=(size*sizeof(persona_t))+(MAX*sizeof(persona_t));
        //size = (1*sizeof(persona_t));
		persone = realloc(persone, size);
	}
	} while (!end);
	return i;
}

void myFunction(persona_t arr[], int n){
	int i, j;
	persona_t key;
	for(i=1; i<n; i++){
		key = arr[i];
		j = i - 1;

		while (j>=0 && p_compare(&arr[j], &key)>0 ){
			arr[j+1] = arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}

void printArray(persona_t arr[], int n){
	int i;
	printf("\n");
	for (i=0; i<n; i++){
		printf("%d: %s %s [%d]: eta %d, reddito %d, altezza %d \n", i+1, arr[i].nome, arr[i].cognome, arr[i].matricola, arr[i].eta, arr[i].reddito, arr[i].altezza);
	}
	printf("\n");
}

int main(void) {
	//persona_t arr[MAX];
	persona_t *arr = calloc(MAX, sizeof(persona_t));
	int n = scanArray(arr);
	myFunction(arr, n);
	printArray(arr, n);

	free(arr);
	//system("PAUSE");
	return 0;
}
