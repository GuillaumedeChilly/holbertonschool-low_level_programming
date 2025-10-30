#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: String to modify.
 *
 * Return: Pointer to s.
 */
char *cap_string(char *s)
{
	int i = 0;
	int cap_next = 1;
	char sep[] = " \t\n,;.!?\"(){}";
	int k;

	while (s[i] != '\0')
	{
		if (cap_next && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= ('a' - 'A');

		cap_next = 0;
		for (k = 0; sep[k] != '\0'; k++)
		{
			if (s[i] == sep[k])
			{
				cap_next = 1;
				break;
			}
		}
		i++;
	}
	return (s);
}
