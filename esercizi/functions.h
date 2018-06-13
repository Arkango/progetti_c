/**
 *  inserimento di utente insertuser()
 *      controlla che il nikname non sia già presente (sennò torna 0)
 *      raccoglie i dati dell'utente 
 *      
 *  ricerca del nickname all'inetero dei dati presenti per mantenere l'unicità
 *  **/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int insertUser(user data[],int index);


int searchNick(user data[], char nick[]);
#endif