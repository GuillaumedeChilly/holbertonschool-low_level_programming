#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Destination buffer.
 * @src: Source string.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
