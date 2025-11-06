#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: String to scan.
 * @accept: Bytes to match.
 *
 * Return: Pointer to the first matching byte in @s, or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
				return (s);
		}
		s++;
	}
	return (0);
}
