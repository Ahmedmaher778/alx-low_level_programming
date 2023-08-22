#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
*/
void puts2(char *str)
{
	int m

	for (m = 0 ; str[m] != '\0' ; m++)
	{
		if (m % 2 == 0)
		_putchar(str[m]);
	}
	_putchar('\n');
}

