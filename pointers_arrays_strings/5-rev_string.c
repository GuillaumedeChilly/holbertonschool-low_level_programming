#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: String to reverse.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (s[j] != '\0')
		j++;

	j -= 1;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
