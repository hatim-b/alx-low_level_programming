#include "main.h"
#include "stdlib.h"

/**
 * read_textfile - function that reads a text file and prints it
 * @filename : file in text format being read
 * @letters : vaeiable of number of letters that need to be read
 *
 * Return: number of letters 0 when functuon fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t b;
	ssize_t cv;
	ssize_t a;
	char *buf;

	cv = open(filename, O_RDONLY);
	if (cv == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	a = read(cv, buf, letters);
	b = write(STDOUT_FILENO, buf, a);

	free(buf);
	close(cv);
	return (b);
}
