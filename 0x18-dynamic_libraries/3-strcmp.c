#include "main.h"
/**
* _strcmp - to compare two strings
*@s1: string 1
* @s2: string 2
*Return: 1 is true 0 is false
*/
int _strcmp(char *s1, char *s2)
{
	int eql = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			eql = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (eql);
}
