/*
 * funzioni_dedicate.h
 *
 *  Created on: May 9, 2018
 *      Author: peppino
 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#ifndef FUNZIONI_DEDICATE_H_
#define FUNZIONI_DEDICATE_H_


void count_word(char string[],int count_word_array[],int names[]){
	char *ch;
	int i,flag = 0;
	int size;


	  ch = strtok(string, " ");
	  while (ch != NULL) {
		  count_word_array[atoi(ch)] ++;
		  i = 0;
		  /* questo è un nome ?*/

		  //while(i < strlen(ch) && flag == 0){
		  //if(isupper(ch[i])){flag = 1;}
		  //}
		  //if(flag){
		  //da fare allocazione dinamica con puntatore
			  //size = sizeof(names);
			  //printf("%d",size);
			  //names[size++] = atoi(ch);
		  //}
		  ch = strtok(NULL, " ,");

	  }
}

void sort(int values[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++) {
            if (values[j] > values[j + 1])
            {
                int bubble = values[j];
                values[j] = values[j + 1];
                values[j + 1] = bubble;
            }
        }
    }
    //for (int i = 0; i < n; i++) { printf("%i", values[i]); } printf("\n"); // debug
}


void write_word(int count_word_array[]){
	int i,counter=0;
	FILE *file;
	file = fopen("max_parole.txt","w");
	counter = ((int)sizeof(count_word_array)) - 3;
	for (int i = (int)sizeof(count_word_array); i > counter ; i--) {
		fwrite(count_word_array[i] , 1 , sizeof(count_word_array[i]) , file );
	}
	fclose(file);
}



#endif /* FUNZIONI_DEDICATE_H_ */
