#include "main.h"
/**
 * leet - encodes astring to 1337
 * @c:  string
<<<<<<< HEAD
 * Return: encoded string
 **/
char *leet(char *c)
{
char *ch = c;
char kys[] = {'A', 'E', 'O', 'T', 'L'};
int value[] = {4, 3, 0, 7, 1};
unsigned int i;

	while (*c)
	{

		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{

			if (*c == kys[i] || *c == kys[i] + 32)
			{
				*c = 48 + value[i];
			}
		}
		c++;
	}
	return (ch);
}
