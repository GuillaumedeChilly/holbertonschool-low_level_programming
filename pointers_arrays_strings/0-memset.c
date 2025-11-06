#include "main.h"

/**
 * _memset - Fill memory with a constant byte.
 * @s: Pointer to the memory area to fill.
 * @b: Byte value to set.
 * @n: Number of bytes to set.
 *
 * Return: Pointer to @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
