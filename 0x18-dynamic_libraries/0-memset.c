#include "main.h"

/**
 * _memset - that fills memory with a constant byte.
 * @s: the pointer tp the memory you want to fill
 * @b: constant
 * @n: size bytes to use
 * Return: pointer s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int var;

	for (var = 0; n > 0; var++, n--)
	{
		s[var] = b;
	}
	return (s);
}
