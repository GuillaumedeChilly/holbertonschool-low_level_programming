#include "main.h"

/**
 * _strchr - Locate first occurrence of a character in a string.
 * @s: String to search.
 * @c: Character to find.
 *
 * Return: Pointer to first occurrence of @c in @s, or NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);

	return (0);
}
