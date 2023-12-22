#include "main.h"
/**
 * _atoi - to converte astring to integer
 * @s: string input parameters
 * Return: converted integer
 **/
int _atoi(char *s)
{
	unsigned int nm = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			nm = (nm * 10) + (*s - '0');
		else if (nm > 0)
			break;
	} while (*s++);

	return (nm * sign);
}
