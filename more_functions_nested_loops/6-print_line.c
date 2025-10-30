#include "main.h"

/**
 * print_line - Draw a line of '_' characters
 * @n: number of '_' to print
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
