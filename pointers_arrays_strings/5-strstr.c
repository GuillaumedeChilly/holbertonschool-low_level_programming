#include "main.h"

/**
 * _strstr - Locate a substring.
 * @haystack: String to search.
 * @needle: Substring to find.
 *
 * Return: Pointer to beginning of located substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return (0);
}
