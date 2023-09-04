#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: string 1
 * @s2: string 2
 * Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	char *x;
	int l, cl;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l = cl = 0;
	while (s1[l] != '\0')
		l++;
	while (s2[cl] != '\0')
		cl++;
	x = malloc(sizeof(char) * (l + cl + 1));

	if (x == NULL)
		return (NULL);
	l = cl = 0;
	while (s1[l] != '\0')
	{
		x[l] = s1[l];
		l++;
	}

	while (s2[cl] != '\0')
	{
		x[l] = s2[cl];
		l++, cl++;
	}
	x[l] = '\0';
	return (x);
}

