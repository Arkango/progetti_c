
int min(int num_1, int num_2)
{
    int min = 0;
    //confronto fra i due numeri
    if (num_1 < num_2)
    {
        min = num_1;
    }
    else
    {
        min = num_2;
    }
    return min;
}

int max(int num_1, int num_2)
{
    int max = 0;
    //confronto fra i due numeri
    if (num_1 < num_2)
    {
        max = num_2;
    }
    else
    {
        max = num_1;
    }
    return max;
}

float avg(int num_1, int num_2)
{
    float average = 0;
    average = (num_1 + num_2) / 2;
    return average;
}

float val_absolute(float num_1)
{

    if (num_1 == 0){
        return 0;
    }else if(num_1 > 0){
        return num_1;
    }else{
        return num_1*-1;
    }
}