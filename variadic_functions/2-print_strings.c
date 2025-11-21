#include "variadic_functions.h"

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
 * print_strings - prints strings with separator
 * @separator: separator string
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
			print_string("(nil)");
		else
			print_string(s);

		if (separator && i < n - 1)
			print_string(separator);
	}

	_putchar('\n');
	va_end(args);
}
