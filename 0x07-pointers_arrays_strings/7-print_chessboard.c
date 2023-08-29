#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: rows
 * Return: Always 0 (Success)
*/

void print_chessboard(char (*a)[8])
{
	int l;
	int g;

	for (l = 0; l < 8; l++)
	{
		for (g = 0; g < 8; g++)
			_putchar(a[l][g]);
		_putchar('\n');
	}
}

