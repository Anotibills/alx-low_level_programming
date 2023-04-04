#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: searched string
 * @accept: prefix to be measured
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int i;
	/**a represents bytes and i represents index*/
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (a);
		}
		s++;
	}
}
