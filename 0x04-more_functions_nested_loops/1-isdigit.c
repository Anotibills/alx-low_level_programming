#include "main.h"

/**
 * _isdigit - to check for digit
 *
 *@c: char we are checking
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
