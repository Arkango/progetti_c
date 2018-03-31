/*
    programma che accetta una stringa lunga massimo 100 caratteri
    e basandosi sugli spazi conta le parole
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char inputString[101];
    char *token;

    printf("Inserisci la tua stringa");
    gets(inputString);

    token = strtok(inputString, ' ');

    while (token != NULL)
    {
        printf(" %s\n", token);

        token = strtok(NULL, ' ');
    }

    return 0;
}