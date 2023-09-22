#include "main.h"
#include <stdio.h>
/**
 * *cap_string - that capitalizes all words of a string.
 * @c: input string
 * Return: string with capitalized
 **/
char *cap_string(char *c)
{
	char *ptr = c;
	int fDlimit = 1;

	while (*c)
	{
		if (isDelimiter(*c))
			fDlimit = 1;
		else if (isLower(*c) && fDlimit)
		{
			*c = 32;
			fDlimit = 0;
		}
		else
			fDlimit = 0;
		c++;
	}
	return (ptr);
}
