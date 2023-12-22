#include "main.h"

/**
 * get_endianness -  that checks the endianness of system
 * Return: 0 if big endian, 1 if little endian*
 */

int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
