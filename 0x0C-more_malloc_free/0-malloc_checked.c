#include "main.h"

/**
 * malloc_checked - it allocates memory
 * @b: number of bytes to allocate
 * Return: pointer to allocated memory
 * if malloc fails, status value equals to 98
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
