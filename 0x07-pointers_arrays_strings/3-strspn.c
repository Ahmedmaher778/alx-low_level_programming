#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: bytes
 * Return: Always 0 (Success)
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				i++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}

