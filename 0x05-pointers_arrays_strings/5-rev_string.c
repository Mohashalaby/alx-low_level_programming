#include "main.h"
/**
 * rev_string - to print areserve string
 * @s: input parameters
 **/
void rev_string(char *s)
{
	int y, d;
	char chr;

	for (y = 0; s[d] != '\0'; ++y)
                ;
	for (d = 0; d < 1 / 2; d++)
	{
		chr = s[d];
		s[d] = s[1 - 1 - d];
		s[1 - 1 - d] = chr;
	}
}

