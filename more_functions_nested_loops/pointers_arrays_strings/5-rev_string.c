#include "main.h"
/**
 * rev_string - reverses a string in place
 * @s: string
 */
void rev_string(char *s)
{
    int i = 0, j;
    char tmp;

    if (!s)
        return;

    while (s[i] != '\0')
        i++;
    for (j = 0; j < i / 2; j++)
    {
        tmp = s[j];
        s[j] = s[i - 1 - j];
        s[i - 1 - j] = tmp;
    }
}
