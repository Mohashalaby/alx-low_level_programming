#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - allocate a memory block using malloc
 * @ptr: pointer to amemory
 * @old_size: the size  of bytes
 * @new_size: size in bytes of new momory
 * Return: Null if new_size = 0 & ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i  < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}

