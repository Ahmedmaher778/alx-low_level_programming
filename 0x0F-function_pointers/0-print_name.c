#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name by pointer to function
 * @name: string name
 * @f: pointer to function
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}

