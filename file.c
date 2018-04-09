#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    FILE *file;

    int account;
    char name[30];
    double balance;

    file = fopen("test.dat","w");

    if(file == NULL){
        puts("errore nell'apertura del file");
    }else{
        printf("inserisci numero , nome, saldo");
        printf("enter EOF to enf input \n");
        printf("? \n");
        scanf("%d%s%lf");
    }

    if(!fclose(file)){ puts("non chiuso"); /*printf("valore fclose %d",fclose(file));*/ }

    return 0;
}