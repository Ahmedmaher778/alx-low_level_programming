#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
	char *s;
	int l, e = 0;

	if (str == NULL)
		return (NULL);
	l = 0;
	while (str[l] != '\0')
		l++;

	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
		return (NULL);

	for (e = 0; str[e]; e++)
		s[e] = str[e];

	return (s);
}

