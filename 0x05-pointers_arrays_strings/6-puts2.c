#include "main.h"
/**
 *  puts2 - to print every other charachter of string
 *               starting with the first charachter
 * @str: input parameters string
 **/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

