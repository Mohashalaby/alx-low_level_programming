#include "main.h"

/**
 *_ isupper.c - check the number if upper or not 
* @c: input alphabet
* Return: 1 if upper case 0 if not 
 * */
int _isupper(int c)
{
	
	if (c >= 65 && c <= 90)
	return (1);
	else 
		return (0);
}
