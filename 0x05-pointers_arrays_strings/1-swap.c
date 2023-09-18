#include "main.h"

/**
 * swap_int - to swap between 2 integrs value
 * @a: input int 1
 * @b: input int 2
 * Return: nothing
 **/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
