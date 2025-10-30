#include "main.h"

/**
 * print_diagonal - Draw a diagonal using '\'
 * @n: number of lines to print
 */
void print_diagonal(int n)
{
	int row = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (row < n)
	{
		int sp = 0;

		while (sp < row)
		{
			_putchar(' ');
			sp++;
		}
		_putchar('\\');
		_putchar('\n');
		row++;
	}
}
