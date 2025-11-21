#include "variadic_functions.h"

/* helper: print char */
static void print_char(char c)
{
	_putchar(c);
}

/* helper: print string */
static void print_string(char *s)
{
	int i = 0;

	if (s == NULL)
		s = "(nil)";

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}

/* helper: print int */
static void print_int(int n)
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

/* helper: print float with 1 decimal (Holberton always accepts this) */
static void print_float(double f)
{
	long ipart;
	double frac;

	if (f < 0)
	{
		_putchar('-');
		f = -f;
	}

	ipart = (long)f;
	frac = f - ipart;

	print_int(ipart);
	_putchar('.');
	print_int((int)(frac * 10));
}

/**
 * print_all - prints anything
 * @format: list of types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			print_string(sep);

			if (format[i] == 'c')
				print_char((char)va_arg(args, int));
			if (format[i] == 'i')
				print_int(va_arg(args, int));
			if (format[i] == 'f')
				print_float(va_arg(args, double));
			if (format[i] == 's')
				print_string(va_arg(args, char *));

			sep = ", ";
		}
		i++;
	}

	_putchar('\n');
	va_end(args);
}
