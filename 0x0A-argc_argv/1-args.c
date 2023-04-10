#include "main.h"

/**
 * main - to print number of arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Number of arguments
 */

int main(int argc, char *argv[])
{
	(void) argv;
		printf("%d\n", argc - 1);
		return (0);
}
