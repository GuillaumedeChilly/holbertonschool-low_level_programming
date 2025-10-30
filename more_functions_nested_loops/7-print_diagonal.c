#include "main.h"

/**
 * print_diagonal - Draw a diagonal line using '\' n times.
 * @n: Number of '\' characters to print.
 */
void print_diagonal(int n)
{
	int row, space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < n; row++)
	{
		for (space = 0; space < row; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
