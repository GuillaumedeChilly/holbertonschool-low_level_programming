#include "main.h"

/**
 * print_square - Print a size x size square using '#'
 * @size: square size
 */
void print_square(int size)
{
	int r = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (r < size)
	{
		int c = 0;

		while (c < size)
		{
			_putchar('#');
			c++;
		}
		_putchar('\n');
		r++;
	}
}
