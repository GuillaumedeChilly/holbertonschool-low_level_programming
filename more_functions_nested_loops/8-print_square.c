#include "main.h"

/**
 * print_square - Print a square of size @size using '#'.
 * @size: Square size. If <= 0, prints only newline.
 */
void print_square(int size)
{
	int r, c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
			_putchar('#');
		_putchar('\n');
	}
}
