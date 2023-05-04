#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: number to be flipped
 * @m: number to be flipped
 * Return: flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a;

	for (a = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			a++;
	}
	return (a);
}
