#include "main.h"

/**
 * find_root - helper to find the natural square root
 * @n: number to find square root of
 * @i: current test value
 *
 * Return: natural square root, or -1 if not found
 */
int find_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_root(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
