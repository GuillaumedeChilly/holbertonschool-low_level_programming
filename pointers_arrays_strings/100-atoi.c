#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to string to convert
 *
 * Return: integer value on success, or 0 if no number found.
 *         If overflow would occur, clamp to INT_MAX / INT_MIN.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;      /* we build this as a NEGATIVE number */
	int started = 0;

	/* Skip non-digits and collect +/- signs */
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

	/* step back so s[i] is the first digit */
	i--;

	/* Accumulate as negative to safely represent INT_MIN */
	while (s[i] >= '0' && s[i] <= '9')
	{
		int d = s[i] - '0';

		/* Overflow check before num * 10 - d */
		if (num < (INT_MIN + d) / 10)
			return (sign == 1 ? INT_MAX : INT_MIN);

		num = (num * 10) - d;
		i++;
	}

	/* If sign is positive, flip back to positive; else keep as negative */
	return (sign == 1 ? -num : num);
}
