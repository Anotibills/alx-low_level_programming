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

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		/*print the value being checked*/
		if (array[i] == value)
		{
			printf("Found %d at index: %lu\n", value, i);
			/*Print the index where the value is found*/
			return (i);
		}
	}

	printf("Found %d at index: -1\n", value);
	/* Print that the value is not found*/
	return (-1);
}
