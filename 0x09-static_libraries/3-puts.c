#include "main.h"

/**
 * _puts - to print astring follwes by anew line
 * @str: input parameters for function
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
