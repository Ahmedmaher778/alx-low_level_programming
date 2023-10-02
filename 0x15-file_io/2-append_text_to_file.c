#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: pointer to name of file
 * @text_content: string to add to the end of file
 * Return: 1 on success 0 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int p, x, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	x = write(p, text_content, length);

	if (p == -1 || x == -1)
		return (-1);

	close(p);

	return (1);
}

