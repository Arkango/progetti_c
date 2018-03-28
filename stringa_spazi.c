#include <stdio.h>
#include <string.h>

/* programma che stampa la stringa anche con gli spazi */

int main()
{
    char stringa[10];
    printf("Inserisci stringa\n");
    gets(stringa);
    printf("%s\n",stringa);
    

    return 0;
}
