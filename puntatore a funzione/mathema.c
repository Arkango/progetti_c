int choose(int *num_1,int *num_2,int(*nome_f)(int *num_1,int *num_2)){

    if((*nome_f)(num_1,num_2)){
        return *num_1;
    }else{
        return *num_2;
    }

}


int min(int *num_1, int *num_2)
{
    //confronto fra i due numeri
    return *num_1 < *num_2;
}

int max(int *num_1, int *num_2)
{
    //confronto fra i due numeri
    return *num_2 < *num_1;
}

float avg(int num_1, int num_2)
{
    return ((num_1 + num_2) / 2);
}

float val_absolute(float num_1)
{
    return num_1 * ((num_1 < 0) * (-1) + (num_1 > 0));
}