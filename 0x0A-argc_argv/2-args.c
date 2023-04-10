#include "main.h"

/**
 * main - prints all arguments received
 * @argc: numbers of arguments
 * @argv: array of arguments
 * Return: argument received
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
