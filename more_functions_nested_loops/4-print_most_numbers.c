#include "main.h"

/**
 * print_most_numbers - Print 0..9 except 2 and 4, then newline
 */
void print_most_numbers(void)
{
	int d = '0';

	while (d <= '9')
	{
		if (d != '2' && d != '4')
			_putchar(d);
		d++;
	}
	_putchar('\n');
}
