#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

int insertUser(user data[], int index)
{

    printf("\n Inserisci nome\n ");
    scanf("%s", data[index].name);

    printf("\n Inserisci cognome\n ");
    scanf("%s", data[index].surname);

    do
    {
        printf("\n Inserisci nickname\n ");
        scanf("%s", data[index].nick);

    } while (searchNick(data, data[index].nick) == 0);

    

    return 1;
}

int searchNick(user data[], char nick[]){
    int i,flag = 0;

    for(i=0; i< 150 && flag == 0; i++){
        if(strcmp(data[i].nick,nick)){
            flag = 1;
        }
    }
    return flag;
}