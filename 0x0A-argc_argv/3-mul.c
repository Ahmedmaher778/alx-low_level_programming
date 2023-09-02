#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int l, d, m, len, h, digit;

	l = 0;
	d = 0;
	m = 0;
	len = 0;
	h = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (l < len && h == 0)
	{
		if (s[l] == '-')
			++d;

		if (s[l] >= '0' && s[l] <= '9')
		{
			digit = s[l] - '0';
			if (d % 2)
				digit = -digit;
			m = m * 10 + digit;
			h = 1;
			if (s[l + 1] < '0' || s[l + 1] > '9')
				break;
			h = 0;
		}
		l++;
	}

	if (h == 0)
		return (0);

	return (m);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: pointer toarray of arguments
 *
 * Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}

