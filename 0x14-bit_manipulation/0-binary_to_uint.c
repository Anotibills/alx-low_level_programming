#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: pointer to string
 * Return: converted number, or 0 if char in b is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int n;
	int l, b_two;

	if (b == NULL)
		return (0);
	n = 0;
	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, b_two = 1; l >= 0; l--, b_two *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			n = n + b_two;
		}
	}
	return (n);
}
