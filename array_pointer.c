#include <stdio.h>


int main(){
    int b[] = {10,20,30,40};
    int *bPtr = b;
    int i,offset;

    printf("ciao proimo ciclo menomato");

    for(i=0;i<4;i++){
        printf(" b[%d] \n",b[i]);
    }

    //printf("ciao sec ciclo menomato");ù

    for(offset=0;offset<4;offset++){
        printf(" %d \n",*(b + offset));
    }

        //print("ciao terzo ciclo menomato");

    for(i=0;i<4;i++){
        printf(" %d \n",bPtr[i]);
    }
        //printf("ciao qurto ciclo menomato");
    
        for(offset=0;offset<4;offset++){
        printf(" %d \n",*(bPtr + offset));
    }

    

    return 0;
}