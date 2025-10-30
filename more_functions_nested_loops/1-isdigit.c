#include "main.h"

/**
 * _isdigit - Check if a character is a digit (0-9).
 * @c: Character code to test.
 *
 * Return: 1 if @c is a digit, otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
