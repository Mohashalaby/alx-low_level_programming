#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to the 1st string
 * @s2: pointer to 2nd string
 * @n: numbers of bytes
 * Return: string
 *
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, m, s1_l, s2_l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_l = 0; s1[s1_l] != '\0'; s1_l++)
		;
	for (s2_l = 0; s2[s2_l] != '\0'; s2_l++)
		;
	c = malloc(s1_l + n + 1);
	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		c[i] = s1[i];

	for (m = 0; m < n; m++)
	{
		c[i] = s2[m];
		i++;
	}

	c[i] = '\0';
	return (c);
}

