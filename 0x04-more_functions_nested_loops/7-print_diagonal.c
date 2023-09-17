#include "main.h"
/**
 *print_diagonal - to print diagonal line
 *@n: the number of times of charachters should be printed
*/
void print_diagonal(int n)
{
	int pnum, spc;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pnum = 1; pnum <= n; pnum++)
		{
			for (spc = 1; spc <= pnum; spc++)
				_putchar(' ');
			_putchar(92); /* equal to '/' char*/
			_putchar('\n');
		}
	}
}
