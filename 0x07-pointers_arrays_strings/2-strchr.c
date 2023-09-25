#include "main.h"

/**
 * *_strchr - to locate a memory of aconstant byte
 * @s: pointer to put aconstant
 * @c: constant
 * Return: pointer s
 **/

char *_strchr(char *s, char c)
{
	int pptr;

	for (pptr = 0; s[pptr] = '\0' ; pptr++)
	{
		if (s[pptr] == c)
		{
			return (s + pptr);
		}
	}

	return ('\0');
}
