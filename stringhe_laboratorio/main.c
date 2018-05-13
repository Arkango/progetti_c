/*
 * main.c
 *
 *  Created on: May 9, 2018
 *      Author: Arcangelo Saracino
 */



#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "funzioni_dedicate.h"


/* menù di scelta :
 * 0 acquisisce la stringa e la elabora
 * 1 mostra i conteggi effetuati
 */

static int count_word_array[] = {};
static int names[] = {};

int main(){
	int scelta = 0,flag = 1;
	char stringaInput[] = "";


	while(flag){ //cilco che ripropone il menu

		//menu
		printf("0 inserisci stringa \n1 termina e visualizza conteggi\n");
		scanf("%d",&scelta);

		switch(scelta){
		case 0 :
			printf("inserisci stringa\n");
			scanf(" %[^\t\n]s",&stringaInput);
			count_word(stringaInput,count_word_array,names);

			//printf("%s",stringaInput);
			break;
		case 1 :
			printf("conteggi\n");
			sort(count_word_array, (int)sizeof(count_word_array));
			write_word(count_word_array);
			flag = 0;
			break;
		default :
			printf("valore inserito non riconosciuto\n");
			break;
		}//fine switch
	}//fine while
	return 0;
}//fine main

