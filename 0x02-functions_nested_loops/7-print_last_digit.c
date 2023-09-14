#include "main.h"

/*
*_print_last_digit -  this function  print last digit of numbers
* @n: take number input
*
* Return: lastDigit
*
*
*/
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n  % 10;
	_putchar(lastDigit + '0');

		return (lastDigit);
}

