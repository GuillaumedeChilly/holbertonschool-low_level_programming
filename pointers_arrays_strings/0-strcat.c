#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Buffer holding the first string and the result.
 * @src: String to append to @dest.
 *
 * Return: Pointer to @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
