#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant
 * @n: max bytes to use
 * Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int l;

	for (l = 0; l < n; l++)

	{

		s[l] = b;

	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)

{

	char *p;

	if (nmemb == 0 || size == 0)

		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)

		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
