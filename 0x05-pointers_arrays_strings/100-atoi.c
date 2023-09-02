#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string
 *
 * Return: integer
*/

int _atoi(char *s)
{
	int sign = 1, l = 0;
	unsigned int res = 0;


	while (!(s[l] <= '9' && s[l] >= '0') && s[l] != '\0')
	{
		if (s[l] == '-')
			sign *= -1;
		l++;
	}
	while (s[l] <= '9' && (s[l] >= '0' && s[l] != '\0'))
	{
		res = (res * 10) + (s[l] - '0');
		l++;
	}
	res *= sign;
	return (res);
}
