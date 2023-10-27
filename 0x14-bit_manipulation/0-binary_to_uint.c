#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -   converted through unsigned int
 * @b: A string that takes binary number or numbers
 * Return: A numbers that are coverted
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int i = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		i = 2 * i + (b[a] - '0');
	}
	return (i);
}
