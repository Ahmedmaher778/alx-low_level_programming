#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: array size
 * @cmp: pointer to function
 * Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int l;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (l = 0; l < size; l++)
	{
		if (cmp(array[l]))
		return (l);
	}
	return (-1);
}

