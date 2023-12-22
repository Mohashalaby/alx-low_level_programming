#include "main.h"

/**
 * _memcpy - to copies memory area
 * @dest: destnation  memory area to be copied
 * @src: source area
 * @n: lenth of source to be copied
 * Return: dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ptr;

	for (ptr = 0; ptr < n; ptr++)
	{
		dest[ptr] = src[ptr];
	}
	return (dest);
}

