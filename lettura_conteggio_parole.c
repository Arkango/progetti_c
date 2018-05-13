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

typedef struct
{
    char word[100];
    int times;
    int name;
} counterWORD;

void count_word(char stringaInput[], counterWORD as[]);
void sort(counterWORD values[], int n);
void write_word(counterWORD count_word_array[]);

int main()
{
    int scelta = 0, flag = 1, i;
    char array[1000];
    char *stringaInput;
    stringaInput = array;
    counterWORD count_word_array[100] = {" ", 0, 0};

    while (flag)
    { //cilco che ripropone il menu

        //menu
        printf("0 inserisci stringa \n1 termina e visualizza conteggi\n");
        scanf("%d", &scelta);

        switch (scelta)
        {
        case 0:
            printf("inserisci stringa\n");

            scanf(" %[^\t\n]s", stringaInput);
            count_word(stringaInput, count_word_array);

            break;
        case 1:
            printf("conteggi\n");
            sort(count_word_array, sizeof(count_word_array));
            write_word(count_word_array);
            for (i = 99; i > 96; i--)
            {
                printf("%s %d volte\n", count_word_array[i].word, count_word_array[i].times);
            }
            for (i = 0; i < 100; i++)
            {
                if (count_word_array[i].name == 1)
                {
                    printf("%s e' un nome\n", count_word_array[i].word);
                }
            }
            flag = 0;
            break;
        default:
            printf("valore inserito non riconosciuto\n");
        } //fine switch
    }     //fine while
    return 0;
} //fine main

void count_word(char stringaInput[], counterWORD as[])
{
    char *ch;
    int i, flag, pos;
    //char stringaInput[100] = "rtgjh saderrgrtgn saderrgrtgn  rtgjh saderrgrtgn rtfyhkj dejhdfgh";

    ch = strtok(stringaInput, " ");

    while (ch != NULL)
    {
        //printf("%s\n", ch);
        flag = 0;
        for (i = 0; i < 100; i++)
        {
            if (strcmp(as[i].word, ch) == 0)
            {
                as[i].times++;
                flag = 1;
            }
        }

        if (flag == 0)
        {
            for (i = 0; i < 100; i++)
            {

                if (as[i].times == 0)
                {
                    pos = i;
                    break;
                }
            }
            strcpy(as[pos].word, ch);
            as[pos].times = 1;
            //Controlliamo se è un nome
            if(isupper(ch[0])){
                as[pos].name = 1;
            }
        }
        ch = strtok(NULL, " ,");
    }
}

void sort(counterWORD values[], int n)
{

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < (100 - i - 1); j++)
        {
            if (values[j].times > values[j + 1].times)
            {
                int bubble = values[j].times;
                values[j].times = values[j + 1].times;
                values[j + 1].times = bubble;

                int name = values[j].name;
                values[j].name = values[j + 1].name;
                values[j + 1].name = name;

                char word[100] = "";
                strcpy(word, values[j].word);
                strcpy(values[j].word, values[j + 1].word);
                strcpy(values[j + 1].word, word);
            }
        }
    }

    //for (int i = 0; i < 100; i++) { printf("%s %d\n", values[i].word,values[i].times); } // debug
}

void write_word(counterWORD count_word_array[])
{
    int i;
    FILE *file;
    file = fopen("max_parole.txt", "wb+");
    for (i = 99; i > 96; i--)
    {
        fwrite(count_word_array[i].word, 1, sizeof(count_word_array[i].word), file);
    }
    fclose(file);
}
