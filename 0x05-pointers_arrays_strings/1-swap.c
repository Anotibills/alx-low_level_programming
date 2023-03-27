#include "main.h"

/**
 * swap_int - function to swap 2 int value
 *
 * @a: integer to swap
 * @b: integer to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
