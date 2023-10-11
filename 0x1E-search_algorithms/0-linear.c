#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: pointer to int
 * @size: size of the array
 * @value: value of int
 * Return: value, or -1 if NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int a = 0;

	if (!array)
		return (-1);

	for (a = 0; a < (int)size; a++)
	/* Traditional loop structure */
	{
		printf("Value checked array[%u] = [%d]\n", a, array[a]);
		if (value == array[a])
			return (a);
	}
	return (-1);
}

