#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: int array
 * @size: size array
 * @cmp: compare functions
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		while (x < size)
		{
			if (cmp(array[x]))
				return (x);
			x++;
		}
	return (-1);
}
