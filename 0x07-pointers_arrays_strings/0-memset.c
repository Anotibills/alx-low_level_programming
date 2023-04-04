#include "main.h"

/**
 * _memset -memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int 1;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
