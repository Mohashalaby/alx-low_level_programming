#include "main.h"

/**
 * _isalpha  - check if the charachter is aletter
 *Return: return 1 if c is alowercase otherwise 0 success
 *@c:  to check the input of the method
**/


int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
			if (c >= 65 && c <= 90)
				return (1);
	return (0);
}


