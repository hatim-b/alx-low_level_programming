#include "main.h"

/**
 * create_file - function that creates a file
 * @filename : name of the file to create
 * @text_content : a NULL terminated string toi write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int cd, b, lin = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lin = 0; text_content[lin];)
			lin++;
	}

	cd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(cd, text_content, lin);

	if (cd == -1 || b == -1)
		return (-1);

	close(cd);

	return (1);
}
