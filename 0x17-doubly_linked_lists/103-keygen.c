#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int u, d;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (u = 0, add = 0; u < len; u++)
		add += argv[1][u];
	p[1] = l[(add ^ 79) & 63];
	for (u = 0, d = 1; u < len; u++)
		d *= argv[1][u];
	p[2] = l[(d ^ 85) & 63];
	for (d = argv[1][0], u = 0; u < len; u++)
		if ((char)d <= argv[1][u])
			d = argv[1][u];
	srand(d ^ 14);
	p[3] = l[rand() & 63];
	for (d = 0, u = 0; u < len; u++)
		d += argv[1][u] * argv[1][u];
	p[4] = l[(d ^ 239) & 63];
	for (d = 0, u = 0; (char)u < argv[1][0]; u++)
		d = rand();
	p[5] = l[(d ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
