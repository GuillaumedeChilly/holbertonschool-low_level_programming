#include "variadic_functions.h"

/**
 * print_number - prints an integer using _putchar
 * @n: integer
 */
static void print_number(int n)
{
	long num = n;
	long div = 1;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	while (num / div >= 10)
		div *= 10;

	while (div > 0)
	{
		_putchar((num / div) % 10 + '0');
		div /= 10;
	}
}

/**
 * print_string - prints a string using _putchar
 * @s: string
 */
static void print_string(const char *s)
{
	int i = 0;

	while (s && s[i])
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * print_numbers - prints numbers with a separator
 * @separator: separator string
 * @n: number of elements
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		print_number(va_arg(args, int));

		if (separator && i < n - 1)
			print_string(separator);
	}

	_putchar('\n');
	va_end(args);
}
