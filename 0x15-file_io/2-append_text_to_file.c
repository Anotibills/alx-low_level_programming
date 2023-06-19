#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string
 * Return: 1 if success, or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	int w;
	int string = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (string = 0; text_content[string];)
			string++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, string);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
