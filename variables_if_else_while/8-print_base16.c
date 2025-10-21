#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	char a;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
