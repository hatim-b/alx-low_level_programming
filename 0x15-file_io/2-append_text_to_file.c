#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: a NULL string
 *
 * Return: 1 on success and -1 on failure If filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, n, lin = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lin = 0; text_content[lin];)
			lin++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	n = write(i, text_content, lin);

	if (i == -1 || n == -1)
		return (-1);

	close(i);

	return (1);
}
