#include "main.h"
int square(int x, int y);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to sum the square root
 * Return: square root
 **/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square(n, 0));
}
/**
 * square - to find natural  square of the number
 *@x: number of calucalate square
 *@y: iteraton
 *Return: result square root
 */

int square(int x, int y)
{
	if (y * y > x)

	return (-1);
	if (y * y == x)
	return (y);

	return (square(x, y + 1));
}
