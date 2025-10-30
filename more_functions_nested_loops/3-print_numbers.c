#include "main.h"

/**
 * print_numbers - Print the digits 0..9 followed by a newline.
 */
void print_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
		_putchar('0' + d);
	_putchar('\n');
}
