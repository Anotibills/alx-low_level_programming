#include "main.h"

/**
 * leet - leet encoding
 * @str: string
 * Return: strength_length
 */
char *leet(char *str)
{
	int i, j;

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (a[j] == str[i])
				str[i] = b[j];
		}
		j++;
	}
	i++;
}
