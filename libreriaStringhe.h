#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int word_counter(char *inp,char *delimiter)
{
    char *inputString, *token, *toFree;
    int counter = 0;

    inputString = toFree = strdup(inp);

    while ((token = strsep(&inputString, delimiter)) != NULL)
    {
        
        if(token == delimiter) counter++;
    }
    free(toFree);//libero memoria
    //printf("\n %d",counter);
    return counter;
}