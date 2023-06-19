#include "main.h"

/**
 * _strchr - function that locates C in a string
 * @s: pointer to character
 * @c: character in string
 * Return: If c is found - a pointer to the first occurence
 * If c is not found - NULL
 */
char *_strchr(char *s, char c)
{
        int i;
        /**i is index*/
        for (i = 0; s[i] >= '\0'; i++)
        {
                if (s[i] == c)
                        return (s + i);
        }
        return ('\0');
}
