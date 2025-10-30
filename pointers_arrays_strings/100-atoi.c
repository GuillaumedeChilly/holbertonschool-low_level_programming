#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer.
 * @s: string to convert.
 *
 * Return: converted number, clamped to INT_MAX/INT_MIN on overflow,
 *         or 0 if no digits are found.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	int started = 0;

	/* Walk prefix: flip sign on '-', start when we hit a digit */
	while (s[i] != '\0' && !started)
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] >= '0' && s[i] <= '9')
			started = 1;
		i++;
	}

	if (!started)
		return (0);

	i--; /* step back to first digit we saw */

	/* Convert digits with overflow protection */
	while (s[i] >= '0' && s[i] <= '9')
	{
		int d = s[i] - '0';

		if (sign == 1)
		{
			/* res * 10 + d > INT_MAX ? */
			if (res > (INT_MAX - d) / 10)
				return (INT_MAX);
			res = res * 10 + d;
		}
		else
		{
			/* res * 10 - d < INT_MIN ?  (res is kept negative here) */
			if (res < (INT_MIN + d) / 10)
				return (INT_MIN);
			res = res * 10 - d;
		}
		i++;
	}

	return (res);
}
