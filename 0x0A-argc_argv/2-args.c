#include <stdio.h>

/**
 * main - print all arguments that recives
 * @argc: integrs
 * @argv: lists
 *Return: return 0 success
 */

int main(int argc, char const *argv[])
{
	int x = 0;

	while (argc--)
	{
		printf("%s'\n", argv[x]);
	}
	return (0);
}
