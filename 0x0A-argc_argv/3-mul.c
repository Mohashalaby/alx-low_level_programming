#include <stdio.h>
#include <stdlib.h>

/**
 * main - to print multiplies of two numbers
 * @argc: argument
 * @argv: pointer an array
 * Return: return 0 success, else fail
 **/

int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
			return (1);
	}
	return (0);
}
