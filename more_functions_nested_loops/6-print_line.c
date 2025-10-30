#include "main.h"

/**
 * print_line - Draw a straight line using '_' n times.
 * @n: Number of '_' characters to print.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
