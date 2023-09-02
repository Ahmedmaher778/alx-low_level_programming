#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: constant
 * @n: max bytes to use
 *
 * Return: pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int itr = 0;

	for (; n > 0; itr++)
	{
		s[itr] = b;
		n--;
	}
	return (s);
}

