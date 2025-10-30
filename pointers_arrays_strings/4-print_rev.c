#include "main.h"
/**
 * print_rev - prints a string in reverse followed by newline
 * @s: string
 */
void print_rev(char *s)
{
    int len = 0, i;
    if (!s)
    {
        _putchar('\n');
        return;
    }
    while (s[len] != '\0')
        len++;
    for (i = len - 1; i >= 0; i--)
        _putchar(s[i]);
    _putchar('\n');
}
