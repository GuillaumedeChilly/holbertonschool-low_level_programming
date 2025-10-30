#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Array to reverse.
 * @n: Number of elements in a.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tmp;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
