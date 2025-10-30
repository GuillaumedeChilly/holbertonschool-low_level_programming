#include "main.h"

/**
 * print_triangle - Print a right triangle using '#'
 * @size: triangle size
 */
void print_triangle(int size)
{
	int row = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (row < size)
	{
		int sp = size - row - 1;
		int ht = row + 1;

		while (sp--)
			_putchar(' ');
		while (ht--)
			_putchar('#');

		_putchar('\n');
		row++;
	}
}
