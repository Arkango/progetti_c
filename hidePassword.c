#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int isconsonant(char ch);
int isvowel(char ch);
char *convert(char s[]);

int main()
{
    char stringa[100] = "";

    printf(" Inserisci la stringa da convertire\n");
    scanf("%s", stringa);

    char *newString = convert(stringa);

    printf("\n stringa convertita %s \n", newString);

    return 0;
}

char *convert(char s[])
{
    char *final = malloc(strlen(s) + 1);

    int j = 0;
    while (s[j] != 0)
    {

        if (isvowel(s[j]))
        {

            final[j] = '*';
        }
        else if (isconsonant(s[j]))
        {

            final[j] = '$';
        }
        else
        {

            final[j] = s[j];
        }
        j++;
    }
    final[j] = 0; // end the string
    return final;
}

int isconsonant(char ch)
{
    //(ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isvowel(char ch)
{

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}