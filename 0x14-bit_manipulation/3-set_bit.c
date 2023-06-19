#include "main.h"

/**
 * set_bit - fucntion that sets value of a bit to 1
 * @n: pointer to value of bit
 * @index: the index
 * Return: 1 it if worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);
	a = 1 << index;
	*n = (*n | a);
	return (1);
}
