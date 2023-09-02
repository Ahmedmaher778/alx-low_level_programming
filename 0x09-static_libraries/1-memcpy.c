#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: source
 *@n: number of bytes
 *
 *Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int itr = n;

	for (; t < itr; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}

