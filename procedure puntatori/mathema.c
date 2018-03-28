#include <stdio.h>

void min(int *num_1, int *num_2,int *minimo)
{
    //confronto fra i due numeri
    if(*num_1 < *num_2){
        *minimo = *num_1;
    }else{
        *minimo = *num_2;        
    }
}

void max(int *num_1, int *num_2,int *max)
{
    //confronto fra i due numeri
    if(*num_1 < *num_2){
        *max = *num_2;
    }else{
        *max = *num_1;        
    }
}

void avg(int *num_1, int *num_2, float *contenitore)
{
    *contenitore= ((*num_1 + *num_2) / 2);
}

void val_absolute(float *num_1,float *contenitore)
{
    *contenitore= *num_1 * ((*num_1 < 0) * (-1) + (*num_1 > 0));
}