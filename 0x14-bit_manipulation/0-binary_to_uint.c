#include "main.h"
/**
 * binary_to_uint - it converts a binary number to unsigned int
 * @b : it's string for the binary number
 *
 * Return:the converted number
 */
unsigned int binary_to_uint(const char *b)
{
        int a;
        unsigned int decim_val = 0;

        if (!b)
                return (0);

        for (i = 0; b[a]; i++)
        {
                if (b[a] < '0' || b[a] > '1')
                        return (0);
                decim_val = 2 * decim_val + (b[a] - '0');
        }

        return (decim_val);
}
