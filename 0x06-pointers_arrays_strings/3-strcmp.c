#include "main.h"

/**
 * _strcmp - compare string
 * @s1: string
 * @s2: string
 * Return: value less than 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	while (i = 0 ; s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	j = s1[i] - s2[i];
	return (j);
}
