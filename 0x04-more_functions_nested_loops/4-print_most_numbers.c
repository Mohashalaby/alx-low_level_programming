#include "main.h"
/**
 * print_most_numbers - print numbers form 1 to 9 except 2&4
 * Return: always 0
 **/
void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (!(n == '2' || n == '4'))
		_putchar(n);
	}
	_putchar('\n');