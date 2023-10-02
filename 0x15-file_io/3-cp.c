#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: name of file buffer is storing chars for
 * Return: pointer to the newly-allocated buffer
*/

char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes file descriptors.
 * @fd: file descriptor to be closed
*/

void close_file(int fd)
{
	int v;

	v = close(fd);

	if (v == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: number of arguments supplied to program
 * @argv: array of pointers to the arguments
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int frm, t, y, x;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	y = read(frm, buff, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		x = write(t, buff, y);
		if (t == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		y = read(frm, buff, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (y > 0);

	free(buff);
	close_file(frm);
	close_file(t);

	return (0);
}

