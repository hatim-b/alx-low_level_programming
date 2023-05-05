#include "main.h"

/**
 * get_bit - it returns a value of a bit as an index in a decval
 * @n: searched number
 * @index: bit's index
 *
 * Return: bit's value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	if (index > 63)
		return (-1);

	bitvalue = (n >> index) & 1;

	return (bitvalue);
}
