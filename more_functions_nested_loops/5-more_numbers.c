#include "main.h"

/**
 * more_numbers - Print 0..14 ten times, each line then newline.
 */
void more_numbers(void)
{
	int line, n;

	for (line = 0; line < 10; line++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('1');
			_putchar('0' + (n % 10));
		}
		_putchar('\n');
	}
}
