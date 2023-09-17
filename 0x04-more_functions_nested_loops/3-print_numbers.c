#include "main.h"
/**
 * print_numbers - to print numbes from 1-9
 **/
void print_numbers(void)
{
	int i;

	do {
		_putchar(i + 48);
		i++
	}
	while (i >= 0 && i <= 9)
	_putchar('\n');
}
