#include "main.h"

/**
 * clear_bit - function that sets value of bit to 0
 * @n: pointer to value
 * @index: the index
 * Return: 1 if it worked, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);
	a = 1 << index;
	if (*n & a)
		*n ^= a;
	return (1);
}
