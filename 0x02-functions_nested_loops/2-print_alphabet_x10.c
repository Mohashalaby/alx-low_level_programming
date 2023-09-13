#include "main.h"

/**
 * print_alphabet_x10 - the function to print all alphabet from a-z 10x
 *
 *
 **/

void print_alphabet_x10(void)
{
	int x;
	int ch;

	for (x = 0; x <= 9; x++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		putchar('\n');
	}
}
