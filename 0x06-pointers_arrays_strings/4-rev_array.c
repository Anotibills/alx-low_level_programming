#include "main.h"

/**
 * reverse_array - swapping elements in string
 * @a: pointer
 * @n: number of arrays
 * Return: array reversed
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n / 2 ; i++)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1 - i] = j;
	}
}
