#include <stdio.h>

/**
 * main - Prints all base-10 digits starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
