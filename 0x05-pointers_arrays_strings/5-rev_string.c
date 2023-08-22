#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: nothing
*/

void rev_string(char *s)
{
	char reverse = s[0];
	int count = 0;
	int m;

	while (s[count] != '\0')
	count++;
	for (m = 0; m < count; m++)
	{
		count--;
		rev = s[m];
		s[m] = s[count];
		s[count] = reverse;
	}
}

