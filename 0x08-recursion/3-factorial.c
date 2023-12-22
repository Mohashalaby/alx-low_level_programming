#include "main.h"

/**
 * factorial - get afactorial to int
 * @n: parameter int
 * Return:int
 **/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
