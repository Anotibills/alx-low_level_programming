#include "main.h"

/**
 * _strlen_recursion - it returns length of string
 * @s: string
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += strlen_recursion(s + 1);
	}
	return (i);
}
