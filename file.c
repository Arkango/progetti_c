#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void writeON(char pswd[],char level[]){
    FILE *myFile;
    myFile = fopen('this.txt','a');
    if(myFile == NULL){
        exit (1);
    }else{
        strcat(pswd, " ");
        strcat(pswd, level);
        fwrite(pswd , 1 , sizeof(pswd) , myFile );
        fclose(myFile);
    }

}