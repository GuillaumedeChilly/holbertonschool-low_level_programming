#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: converted value, or 0 if no digits
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, started = 0;
    int result = 0;

    if (!s)
        return (0);

    /* skip until we hit signs or digits, handling many signs */
    while (s[i] != '\0' && !started)
    {
        if (s[i] == '-')
            sign = -sign;
        else if (s[i] == '+')
            ; /* sign unchanged */
        else if (s[i] >= '0' && s[i] <= '9')
            started = 1;
        else if (started == 0 && (s[i] != ' ' && s[i] != '\t' &&
                 s[i] != '\n' && s[i] != '\r' && s[i] != '\v' && s[i] != '\f'))
        {
            /* non-space, non-sign, non-digit before number: keep scanning */
        }
        if (!started)
            i++;
    }

    if (!started)
        return (0);

    /* parse digits */
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return (sign * result);
}
