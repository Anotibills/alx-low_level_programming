#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string
 * Return: 1 if success, or -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int w;
	int string = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (string = 0; text_content[string];)
			string++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file, text_content, string);
	if (file == -1 || w == -1)
		return (-1);
	close(file);
	return (1);
}

