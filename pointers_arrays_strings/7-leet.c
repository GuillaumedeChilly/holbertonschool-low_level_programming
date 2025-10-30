#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: s
 *
 * a/A->4, e/E->3, o/O->0, t/T->7, l/L->1
 * (one if, two loops)
 */
char *leet(char *s)
{
    int i, j;
    char letters[] = "aAeEoOtTlL";
    char nums[]    = "4433007711";

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; letters[j] != '\0'; j++)
        {
            if (s[i] == letters[j])
            {
                s[i] = nums[j];
                break;
            }
        }
    }
    return (s);
}
