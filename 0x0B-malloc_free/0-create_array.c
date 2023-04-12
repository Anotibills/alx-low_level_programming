#include "main.h"

/**
 * create_array - creates an array of characters
 * @c: charcter to create
 * @size: size of array
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; i++)
		str[a] = c;
	return (str);
}
