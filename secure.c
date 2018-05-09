#include <ctype.h>
#include <string.h>

char is_secure(char pswd[])
{
    int len = strlen(pswd);
    int i, counterINT = 0, counterPUN = 0;
    for (i = 0; i < len; i++)
    {
        if (isdigit(pswd[i]))
            counterINT++;
        if (ispunct(pswd[i]))
            counterPUN++;
    }

    if (counterINT > 5 && counterPUN > 3)
    {
        return "secure";
    }
    if (counterINT <= 4 && counterPUN > 3)
    {
        return "mid-secure";
    }

    if ((counterINT + counterPUN) <= 2)
    {
        return "not-secure";
    }
}
