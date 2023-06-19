#include "main.h"

/**
 * _strncat - concatenate a string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int strlen, z;

	strlen = 0;
	while (dest[strlen] != '\0')
	{
		strlen++;
	}
	for (z = 0; z < n && src[z] != '\0' ; z++, strlen++)
	{
		dest[strlen] = src[z];
	}
	dest[strlen] = '\0';
	return (dest);

}
