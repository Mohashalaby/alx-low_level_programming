#include "variadic_functions.h"

/**
 * sum_them_all.c - returns the sum of all its parameters
 * @n: numbers of arguments
 * @...: the integers to sum
 * Return: integer
 **/
int sum_them_all(const unsigned int n, ...)
{
	int x = 0, y = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (y--)
		x += va_arg(ap, int);
	va_end(ap);
	return (x);
}
