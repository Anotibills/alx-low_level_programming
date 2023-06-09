#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the new array
 * if min > max, return NULL
 * if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(*a) * ((max - min) + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
		a[i] = min;
	return (a);
}
