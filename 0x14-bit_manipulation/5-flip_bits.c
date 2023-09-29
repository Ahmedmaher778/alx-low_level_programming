#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number.
 * @m: second number.
 * Return: number of bits to change.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int l, co = 0;
	unsigned long int curr;
	unsigned long int ex = n ^ m;

	for (l = 63; l >= 0; l--)
	{
		curr = ex >> l;
		if (curr & 1)
			co++;
	}

	return (co);
}

