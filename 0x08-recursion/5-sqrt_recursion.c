#include "main.h"

int square(int m, int l);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @m: int
 * Return: the resulting square root
*/
int _sqrt_recursion(int l)
{
	if (m < 0)
		return (-1);
	return (square(m, 0));
}

/**
 * square - recurses to find the natural
 * square root of a number
 * @m: number to calculate the sqaure root of
 * @l: square root
 * Return: the resulting square root
*/

int square(int m, int l)
{
	if (l * l > m)
		return (-1);
	if (l * l == m)
		return (l);
	return (square(m, l + 1));
}

