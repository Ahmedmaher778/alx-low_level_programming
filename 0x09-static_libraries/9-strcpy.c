#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: char tyoe string
 * @src: char type string
 * Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int o = 0;
	int i = 0;

	while (*(src + o) != '\0')
	{
		o++;
	}
	for ( ; i < o ; i++)
	{
		dest[i] = src[i];
	}
	dest[o] = '\0';
	return (dest);
}

