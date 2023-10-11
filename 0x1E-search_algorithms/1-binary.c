#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array
 * @array: pointer to array
 * @start: size of starting index
 * @end: size of ending index
 * @value: value to search for
 * Return: index of the number, or -1 if not found
 */
int recursive_search(int *array, size_t start, size_t end, int value)
{
	size_t mid;
	size_t i;

	if (start > end)
	return (-1);

	mid = start + (end - start) / 2;

	printf("Searching in array");
	for (i = start; i <= end; i++)
	{
		if (i == start)
		{
			printf(":");
		}
		else
		{
			printf(",");
		}
		printf(" %d", array[i]);
	}
	printf("\n");

	if (array[mid] == value)
	return (mid);

	if (array[mid] > value)
	return (recursive_search(array, start, mid - 1, value));

	return (recursive_search(array, mid + 1, end, value));
}


/**
 * binary_search - calls to binary_search to return
 * @array: array pointer
 * @size: size of array
 * @value: value to search for
 * Return: index of the number, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (recursive_search(array, 0, size - 1, value));
}

