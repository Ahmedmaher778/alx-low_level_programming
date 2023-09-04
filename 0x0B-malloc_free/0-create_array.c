#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to initialize
 * Return: pointer to array, NULL if fail
 *
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int l;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (l = 0; l < size; l++)
		str[l] = c;
	return (str);
}

