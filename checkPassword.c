/*
Programma che si occupa di controlare se una stringa ha al suo interno almeno un numero ed una lettera maiuscola

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef enum {
    FALSE,TRUE
}bool;

int main(){
    bool flagUppercase = FALSE,flagNumber = FALSE;
    char pswd[20];
    int i = 0,lenght=0;

    printf("Inserisici una stringa\n");

    scanf("%s",pswd);

    lenght = strlen(pswd);

    while(i < lenght ||  (flagUppercase == FALSE  && flagNumber == FALSE)){
        if(isupper(pswd[i])) flagUppercase = TRUE;
        if(isdigit(pswd[i])) flagNumber = TRUE;
        i ++;
    }

    if(flagUppercase == FALSE  || flagNumber == FALSE){
        printf("Manca una lettera maiuscola o un numero\n");
    }else{
        printf("Password corretta\n");        
    }

    return 0;
}