#include <stdio.h>

/**
 * main - Prints all base-10 digits starting from 0 using putchar
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
