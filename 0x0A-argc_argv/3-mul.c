#include <stdio.h>

/**
 * main - prints sum of 2 numbers
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0 (Success),no-zero-fail
*/

int main(int argc, char *argv[])
{
	int s;

	if (argc == 3)
	{
		s = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", s);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

