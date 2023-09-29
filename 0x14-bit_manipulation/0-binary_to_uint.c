#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the binary number as a string.
 *
 * Return: the converted number.
*/

unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] < '0' || b[l] > '1')
			return (0);
		dec = 2 * dec + (b[l] - '0');
	}

	return (dec);
}

