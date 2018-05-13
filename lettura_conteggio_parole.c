/*
 * main.c
 *
 *  Created on: May 9, 2018
 *      Author: Arcangelo Saracino
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/* menù di scelta :
 * 0 acquisisce la stringa e la elabora
 * 1 mostra i conteggi effetuati
 */

typedef struct {
    char word[100];
    int times;
} counterWORD;


int names[] = {};

void count_word(char string[],counterWORD as[]);
void sort(int values[], int n);
void write_word(int count_word_array[]);

int main()
{
    int scelta = 0, flag = 1;
    char *stringaInput;
    counterWORD count_word_array[100];

    while (flag)
    { //cilco che ripropone il menu

        //menu
        printf("0 inserisci stringa \n1 termina e visualizza conteggi\n");
        scanf("%d", &scelta);

        switch ((int) scelta)
        {
        case 0:
            printf("inserisci stringa\n");

            scanf(" %[^\t\n]s", stringaInput);
            //count_word(stringaInput[0],count_word_array);
            //printf("%s",stringaInput);
            break;
        case 1:
            printf("conteggi\n");
            //sort(count_word_array, (int)sizeof(count_word_array));
            //write_word(count_word_array);
            flag = 0;
            break;
        default:
            printf("valore inserito non riconosciuto\n");
        } //fine switch
    }     //fine while
    return 0;
} //fine main

void count_word(char string[], counterWORD as[])
{
    char *ch;
    int i,flag;

    ch = strtok(string, " ");
    while (ch != NULL)
    {

        flag = 0;
        for(i = 0; i < 500; i++){
            if(strcmp(as[i].word,ch) == 0){
                as[i].times ++;
                flag = i;
            }
        }
        if(flag == 0){
           printf("mancante");
            //as[i].word = ch;
            //as[i].times = 1;
        }
        

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
        for (int j = 0; j < (n - i - 1); j++)
        {
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

// void write_word(int count_word_array[])
// {
//     int i, counter = 0;
//     FILE *file;
//     file = fopen("max_parole.txt", "w");
//     counter = ((int)sizeof(count_word_array)) - 3;
//     for (int i = (int)sizeof(count_word_array); i > counter; i--)
//     {
//         fwrite(count_word_array[i], 1, sizeof(count_word_array[i]), file);
//     }
//     fclose(file);
// }
