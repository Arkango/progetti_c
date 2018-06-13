/**
 * Author Arcangelo Saracino
 * Date   13.06.2018
 * Title  Social network  
 * **/

/** functions
 * 
 *  register user (name,surname,nickname,friends,like from users)
 *        nickname unique
 *        memorize users on file
 *        a user can be able to have at maximum 50 friends and 10 like
 * 
 *  relationship between users
 *        memorize them on file
 * 
 *  add like if user are not friends
 *        memorize likes
 * **/

#include <stdio.h>
#include <stdlib.h>
#include "structs.h"
#include "functions.h"


int main(){

    user Users[150];
    int scelta = 0,i=0;

     printf("registra gli utenti\n");

    do{
        printf("utente %d\n",i+1);

        if(insertUser(Users,i) == 1){
            i++;
        }
       

    }while(i < 150 && scelta == 0 );

    return 0;
}