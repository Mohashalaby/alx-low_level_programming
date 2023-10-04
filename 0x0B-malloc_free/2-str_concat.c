#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - that concatenates two strings
 * @s1: point to string 1
 * @s2: point to string 2
 * Return: string
 **/
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, k = 0, l = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x])
		x++;
	while (s2[y])
		y++;

	l = x + y;
	c = malloc((sizeof(char) * l)  + 1);

	if (c == NULL)
		return (NULL);

	y = 0;

	while (k < l)
	{
		if (k <= x)
			c[k] = s1[k];
		if (k >= x)
		{
			c[k] = s2[y];
			y++;
		}

		k++;
	}

	c[k] = '\0';
	return (c);
}
