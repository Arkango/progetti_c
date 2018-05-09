#include <stdio.h>
#include <string.h>
#include "secure.h"
#include "file.h"

/* calcolo sicurezza password di cinque utewnti*/

typedef struct
{
    char nome[20];
    char cognome[20];
    char indirizzo[30];
    char password[20];
} User;

void get_info(User x);

int main()
{

    unsigned int n_users = 5, i;
    User users[n_users];

    for (i = 0; i < n_users; i++)
    {
        get_info(users[i]);
    }

    return 0;
}

void get_info(User x)
{

    printf("inserisci il tuo nome max 19\n");
    scanf("%s", x.nome);
    if(strlen(x.nome) > 19)printf("sono stati tenuti in considerazione solo i primi 19 caratteri \n");
    printf("inserisci il tuo cognome \n");
    scanf("%19s", x.cognome);
    printf("inserisci il tuo inidirizzo \n");
    scanf("%29s", x.indirizzo);
    printf("inserisci la tua password \n");
    scanf("%19s", x.password);
    writeON(x.password,is_secure(x.password));    
}
