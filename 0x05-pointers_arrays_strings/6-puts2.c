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
	int t = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (i = 0 ; i <= t ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}


