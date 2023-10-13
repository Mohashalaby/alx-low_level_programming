#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: parameter int
 * @av: parameter charachter
 * Return: all parameter in program
 */
char *argstostr(int ac, char **av)
{
	int w = 0, x = 0, y = 0, z = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (x < ac)
	{
		while (av[x][y])
		{
			w++;
			y++;
		}

		y = 0;
		x++;
	}

		s = malloc((sizeof(char) * w) + ac + 1);

		x = 0;
		while (av[x])
		{
			while (av[x][y])
			{
				s[z] = av[x][y];
				z++;
				x++;
			}

			s[z] = '\0';

			y = 0;
			z++;
			x++;
		}
		z++;
		s[z] = '\0';
		return (s);
}
