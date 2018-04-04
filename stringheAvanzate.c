#include <stdio.h>
#include <string.h>


int main (){

    char stringa[101];

    //scambio

    //string replace
    //str_replace(stringa, "has", "blabla");

    //word counter
    // printf("\n %d",word_counter(inp)); 

}

int word_counter(char *inp)
{
    char *inputString, *token, *toFree;
    int counter = 0;

    inputString = toFree = strdup(inp);

    while ((token = strsep(&inputString, " ")) != NULL)
    {
        if(token != " ") counter++;
    }
    free(toFree);//libero memoria
    //printf("\n %d",counter);
    return counter;
}

void str_replace(char *target, const char *needle, const char *replacement)
{
    char buffer[101] = { 0 };
    char *insert_point = &buffer[0];
    const char *tmp = target;
    size_t needle_len = strlen(needle);
    size_t repl_len = strlen(replacement);

    while (1) {
        const char *p = strstr(tmp, needle);

        // walked past last occurrence of needle; copy remaining part
        if (p == NULL) {
            strcpy(insert_point, tmp);
            break;
        }

        // copy part before needle
        memcpy(insert_point, tmp, p - tmp);
        insert_point += p - tmp;

        // copy replacement string
        memcpy(insert_point, replacement, repl_len);
        insert_point += repl_len;

        // adjust pointers, move on
        tmp = p + needle_len;
    }

    // write altered string back to target
    strcpy(target, buffer);
}