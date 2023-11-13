#include "main.h"

/**
 * *_realloc - allocates a memory block using malloc and free.
 * @ptr: pointer to memory allocated with malloc(old_size).
 * @old_size: size in bytes, of allocated space for ptr
 * @new_size: size in bytes of new memory block.
 * Return: NULL if new_size = 0 and ptr is not NULL.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *b;
	unsigned int l;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		b = malloc(new_size);
		if (b == NULL)
			return (NULL);
		return (b);
	}
	if (new_size > old_size)
	{
		b = malloc(new_size);
		if (b == NULL)
			return (NULL);
		for (l = 0; l < old_size && l < new_size; l++)
			*((char *)b + l) = *((char *)ptr + l);
		free(ptr);
	}
	return (b);
}
