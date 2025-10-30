#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value (0 if no digits found)
 */
int _atoi(char *s)
{
	int sign = 1;
	int res = 0;
	int started = 0;

	/* Skip non-digit chars, track sign */
	while (*s && !started)
	{
		if (*s == '-')
			sign = -sign;
		else if (*s >= '0' && *s <= '9')
			started = 1;
		s++;
	}

	if (!started)
		return (0);
	s--; /* step back to first digit */

	while (*s >= '0' && *s <= '9')
	{
		int d = *s - '0';

		if (sign == 1)
		{
			if (res > (INT_MAX - d) / 10)
				return (INT_MAX);
			res = res * 10 + d;
		}
		else
		{
			if (res < (INT_MIN + d) / 10)
				return (INT_MIN);
			res = res * 10 - d;
		}
		s++;
	}
	return (res);
}
