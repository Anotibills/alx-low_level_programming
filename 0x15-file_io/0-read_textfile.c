#include "main.h"

/**
 * read_textfile - function that reads a text file
 * @filename: pointer to the file
 * @letters: characters to be read
 * Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file, r, w;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(file, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(file);
	return (w);
}

