#include "main.h"

/**
 * flip_bits - number of bits to change
 * @n: the number u desire to change
 * @m: desired output
 *
 * Return: the number of bits u need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int now;
	unsigned long int special = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		now = special >> a;
		if (now & 1)
			count++;
	}

	return (count);
}
