#include "main.h"

/**
 * get_bit - it takes the value of a bit of index in a decimal num
 * @n: search for index or num
 * @index: numbers of bit of index(s)
 * Return: The bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int am;

	if (index > 63)
		return (-1);
	am = (n >> index) & 1;
	return (am);
}
