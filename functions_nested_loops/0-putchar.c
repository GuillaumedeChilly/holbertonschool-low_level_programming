#include "main.h"

/**
 * main - prints "_putchar" followed by a new line
 * Return: 0
 */
int main(void)
{
	char s[] = "_putchar\n";
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (0);
}
