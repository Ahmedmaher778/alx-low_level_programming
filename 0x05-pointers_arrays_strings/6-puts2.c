#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: string input
 * Return: nothing
*/

void puts2(char *str)
{
	int length = 0;
	int r = 0;
	char *u = str;
	int i;

	while (*u != '\0')
	{
		u++;
		length++;
	}
	r = length - 1;
	for (i = 0 ; i <= t ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}


