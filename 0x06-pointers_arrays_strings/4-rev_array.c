#include "main.h"

/**
 * reverse_array - swapping elements in string
 * @a: pointer
 * @n: number of arrays
 * Return: array reversed
 */
void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;
	j = 0;
	while (j <= n)
	{
		i  = a[j];
		a[j++] = a[n];
		a[n --] = i;
	}
}
