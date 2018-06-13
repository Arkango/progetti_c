/**
 * struttura dell'utente all'interno del programma
 * **/

#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct user{
    char name[30];
    char surname[30];
    char nick[30];
    char *friends[50][1];
    char *likes[10][1];
}user;

#endif