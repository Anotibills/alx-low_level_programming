#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer
 * Return: if element matches or size <= 0, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
