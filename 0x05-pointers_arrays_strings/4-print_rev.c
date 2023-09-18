#include "main.h"
/**
 * print_rev - to print reverse string
 * @s: input parameters string
 * Return: nothing
 **/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
