#include "main.h"

/**
 * _strspn - Get length of a prefix substring.
 * @s: String to check.
 * @accept: Bytes accepted.
 *
 * Return: Number of bytes in the initial segment of @s
 *         consisting only of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int hit;
	char *a;

	while (*s)
	{
		hit = 0;
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				hit = 1;
				break;
			}
		}
		if (!hit)
			break;
		count++;
		s++;
	}
	return (count);
}
