#include "main.h"

int check_prime(int m, int l);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @m: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
*/

int is_prime_number(int m)
{
	if (m <= 1)
		return (0);
	return (check_prime(m, m - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @m: number to evaluate
 * @l: int
 * Return: 1 if n is prime, 0 if not
*/

int check_prime(int m, int l)
{
	if (l == 1)
		return (1);
	if (m % l == 0 && l > 0)
		return (0);
	return (check_prime(m, l - 1));
}

