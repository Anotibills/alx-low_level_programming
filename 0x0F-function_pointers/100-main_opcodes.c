#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: argument
 * @argv: array of pointers to argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int b, i;
	int (*addr)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < b; i++)
	{
		opcode = *(unsigned char *)addr;
		printf("%.2x", opcode);
		if (i == b - 1)
			continue;
		printf(" ");
		addr++;
	}
	printf("\n");
	return (0);

}
