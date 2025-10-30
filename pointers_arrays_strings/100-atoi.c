#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: String to convert.
 *
 * Return: The converted integer; 0 if no numbers are found.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int started = 0;
	int num = 0;

	/* Skip leading non-digit/signs while tracking +/- */
	while (s[i] != '\0' && !started)
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] == '+')
		{
			/* do nothing */
		}
		else if (s[i] >= '0' && s[i] <= '9')
			started = 1;
		else
		{
			/* ignore other characters */
		}

		if (!started)
			i++;
	}

	/* Convert consecutive digits */
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = (num * 10) + (s[i] - '0');
		i++;
	}

	return (sign * num);
}
