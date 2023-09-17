#include "main.h"
/**
 * print_most_numbers - print numbers form 1 to 9 except 2&4
 * Return: always 0
 **/
void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == '2' || x == '4')
		_putchar( x + 48);
	}
	_putchar('\n');
}
