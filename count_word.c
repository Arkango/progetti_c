/*
    programma che accetta una stringa lunga massimo 100 caratteri
    e basandosi sugli spazi conta le parole
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int word_counter(char *inp);

int main()
{

    int count;
   
    char inp[101] = "";
    fgets(inp, 101, stdin);
    printf("\n %d",word_counter(inp)); 


    return 0;
}
int word_counter(char *inp)
{
    char *inputString, *token, *toFree;
    int counter = 0;

    inputString = toFree = strdup(inp);

    while ((token = strsep(&inputString, " ")) != NULL)
    {
        
        if(token != " ") counter++;
    }
    free(toFree);//libero memoria
    //printf("\n %d",counter);
    return counter;
}
