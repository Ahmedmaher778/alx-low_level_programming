#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print.
*/

void print_binary(unsigned long int n)
{
	int l, co = 0;
	unsigned long int curr;

	for (l = 63; l >= 0; l--)
	{
		curr = n >> l;

		if (curr & 1)
		{
			_putchar('1');
			co++;
		}
		else if (co)
			_putchar('0');
	}
	if (!co)
		_putchar('0');
}

