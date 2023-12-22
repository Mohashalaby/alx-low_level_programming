#include "main.h"
#include <stdlib.h>

/**
 * create_array - to creat array of chars,
 *                  and initializes it with a specific char.
 * @size: point to size of this array
 * @c: charchtar in array
 * Return: the array
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *s;

	if (size == 0)
	return (NULL);
	s = malloc(size * sizeof(char));
			if (s == NULL)
			return (NULL);

			for (n = 0 ; n < size ; n++)
			{
			s[n] = c;
			}
			return (s);
}
