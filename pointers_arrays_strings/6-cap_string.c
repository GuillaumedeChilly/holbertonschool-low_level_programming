#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
    int i = 0, j;
    char sep[] = " \t\n,;.!?\"(){}";

    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= ('a' - 'A');

    while (s[i] != '\0')
    {
        for (j = 0; sep[j] != '\0'; j++)
        {
            if (s[i] == sep[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
            {
                s[i + 1] -= ('a' - 'A');
                break;
            }
        }
        i++;
    }
    return (s);
}
