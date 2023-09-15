#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: string separator
 * @n: number of arguments
 * @...: variable number of numbers to be printed.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int ind;

	va_start(numbers, n);

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(numbers, int));

		if (ind != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);
}

