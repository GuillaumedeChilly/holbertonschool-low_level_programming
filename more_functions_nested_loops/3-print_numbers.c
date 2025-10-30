#include "main.h"

/**
 * print_numbers - Print 0..9 followed by newline
 */
void print_numbers(void)
{
	int d = '0';

	while (d <= '9')
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');
}
