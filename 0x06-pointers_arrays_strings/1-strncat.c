#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 *
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: @dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int j;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[c] = src[j];
	c++;
	j++;
	}
	dest[c] = '\0';
	return (dest);
}

