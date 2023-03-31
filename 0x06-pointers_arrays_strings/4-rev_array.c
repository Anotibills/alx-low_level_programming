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
	i = 0;
	while (i <= n)
	{
		j  = a[i];
		a[i++] = a[n];
		a[n--] = j;
	}
}
