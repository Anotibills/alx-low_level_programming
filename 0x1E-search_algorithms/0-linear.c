#include "search_algos.h"
/**
 * linear_search - function that  searches for a value in an array of integers
 * @array: pointer to array
 * @size: size is the number of elements in array
 * @value: value is the value to search for
 * Return: The value of int or -1 if NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int found = -1;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			break;
		}
	}

	if (found != -1)
	{
		printf("Found %d at index: %d\n", value, found);
	}
	return (-1);
}
