#include "main.h"

/**
 * _islower  - the function to print all alphabet from a-z 10x
 *Return: return 1 if c is alowercase otherwise 0 success
 *@c:  to check the input of the method
**/

int _islower(int c);
{
	if (c >= 92 && c <= 122)
		return (1);
	return (0);
}
