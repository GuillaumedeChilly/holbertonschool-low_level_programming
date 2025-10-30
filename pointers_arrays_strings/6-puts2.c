#include "main.h"
/**
 * puts2 - prints every other character starting with the first
 * @str: string
 */
void puts2(char *str)
{
    int i = 0;
    if (!str)
    {
        _putchar('\n');
        return;
    }
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i += 2;
    }
    _putchar('\n');
}
