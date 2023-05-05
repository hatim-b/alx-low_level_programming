#include "main.h"

/**
 * set_bit - it sets the value of a bit to 1 at a given index
 * @n: the pointer for the variable number
 * @index: starts from 0 of the desired bit
 *
 * Return: 1 if it worked or -1 in case of an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
