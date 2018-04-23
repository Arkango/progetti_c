#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *file;

    int account;
    char name[30];
    double balance;
    int value;

    file = fopen("test.dat", "w+");

    if (file == NULL)
    {
        puts("errore nell'apertura del file");
    }
    else
    {
        // printf("inserisci numero , nome, saldo \n");
        // printf("enter EOF to enf input \n");
        // printf("? \n");
        // scanf("%d%s%lf", &account, name, &balance);

        // while (!feof(stdin))
        // {
        //     fprintf(file, "%d %s %.2f\n", account, name, balance);
        //     printf("? \n");
        //     //scanf("%d%s%lf", &account, name, &balance);
        // }

        // fscanf(file, "%d%s%lf", &account, name, &balance);

        // while (!feof(file))
        // {
        //     printf("%-10d %s %.2f\n", account, name, balance);

        //     fscanf(file, "%d%s%lf", &account, name, &balance);
        //}

        fscanf(file,"%d",&value);

        printf("valore letto: %d",value);

        



        if (!fclose(file))
        {
            puts("non chiuso"); /*printf("valore fclose %d",fclose(file));*/
        }
    }

    return 0;
}