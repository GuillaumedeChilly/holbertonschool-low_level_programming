#include "main.h"

/**
 * more_numbers - Print 10 times the numbers 0..14
 */
void more_numbers(void)
{
	int line = 0;

	while (line < 10)
	{
		int n = 0;

		while (n <= 14)
		{
			if (n > 9)
				_putchar('1');
			_putchar('0' + (n % 10));
			n++;
		}
		_putchar('\n');
		line++;
	}
}
