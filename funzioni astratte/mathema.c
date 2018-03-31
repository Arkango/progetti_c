

int min(int num_1, int num_2)
{
    //confronto fra i due numeri
    return num_1 < num_2;
}

float avg(int num_1, int num_2)
{
    return ((num_1 + num_2) / 2);
}

float val_absolute(float num_1)
{
    return num_1 * ((num_1 < 0) * (-1) + (num_1 > 0));
}