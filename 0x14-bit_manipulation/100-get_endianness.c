#include "main.h"

/**
 * get_endianness - checks indianess
 * Return: 0 if big endian or 1 if little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
