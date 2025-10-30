#include "main.h"

/**
 * _isupper - Check if a character is uppercase (A-Z).
 * @c: Character code to test.
 *
 * Return: 1 if @c is uppercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
