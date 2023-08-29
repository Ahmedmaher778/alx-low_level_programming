#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *b = needle;

		while (*s == *b && *b != '\0')
		{
			s++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}

