#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: string
 */
void puts_half(char *str)
{
    int len = 0, start;

    if (!str)
    {
        _putchar('\n');
        return;
    }

    while (str[len] != '\0')
        len++;

    /* if odd, start at (len + 1) / 2; if even, start at len / 2 */
    start = (len - 1) / 2 + 1;

    while (str[start] != '\0')
    {
        _putchar(str[start]);
        start++;
    }
    _putchar('\n');
}
