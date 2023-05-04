#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * @n: value of bit
 * @index: the index
 * Return: the value of bit at index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (!n && index < 64)
		return (0);
	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
		{
			return (n & 1);
		}
	}
	return (-1);
}
