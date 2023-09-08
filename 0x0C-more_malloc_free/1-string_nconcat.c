#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *p;

	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])

		l1++;

	while (s2 && s2[l2])

		l2++;

	if (n < l2)
		p = malloc(sizeof(char) * (l1 + n + 1));

	else
		p = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!p)
		return (NULL);

	while (i < l1)

	{
		p[i] = s1[i];

		i++;

	}

	while (n < l2 && i < (l1 + n))
		p[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		p[i++] = s2[j++];

	p[i] = '\0';

	return (p);
}
