#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * @str: pointer to astring to be copied
 * @Return: string
 **/

char *_strdup(char *str)
{
	int a = 0, b = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[b])
	{
		b++;
	}

	s = malloc((sizeof(char) * b) + 1);

	if (s ==  NULL)
		return (NULL);

	while (a < b)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
