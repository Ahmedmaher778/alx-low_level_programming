#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: int
 * @height: int
 * Return: pointer to 2 dim. array
*/

int **alloc_grid(int width, int height)
{
	int **ne;
	int z, t;

	if (width <= 0 || height <= 0)
		return (NULL);

	ne = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (z = 0; z < height; z++)
	{
		mee[z] = malloc(sizeof(int) * width);

		if (ne[z] == NULL)
		{
			for (; z >= 0; z--)
				free(ne[z]);

			free(ne);
			return (NULL);
		}
	}

	for (z = 0; z < height; z++)
	{
		for (t = 0; t < width; t++)
			mee[z][t] = 0;
	}

	return (ne);
}

