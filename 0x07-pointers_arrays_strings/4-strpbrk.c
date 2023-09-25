#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: parameter string
 *@accept: string
 * Return: pointer s
**/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *c;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\n')
		{
			if (accept[j] == s[i])
			{
				c = &s[i];
				return (c);
			}
			j++;
		}
		i++;
	}

	return (0);
}
