#include "main.h"
/**
 * puts_half - print the second half of astring
 * @str: input string parameters
 **/
void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;
	x++;
	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
