#include "main.h"
#include <stdio.h>
/**
 * isLower - determine whether ascii lowercase
 * @c: charachter
 * Return: 1 if true 0 if false
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
 /**
  * isDelimiter - determine whether ascii is delimiter
  * @c: charachter
  * Return: 1 true , 0 false
  */
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"()()";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}
/**
 * *cap_string - that capitalizes all words of a string.
 * @c: input string
 * Return: string with capitalized
 */
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
