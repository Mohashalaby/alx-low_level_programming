#include <stdio.h>

/**
 * main - computes and prints the sum of all  multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int sum, sum1, sum2;
	int i;

	sum = 0;
	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum = sum + i;
		} else if ((i % 5) == 0)
		{
			sum1 = sum1 + i;
		}
	}
	sum2 = sum + sum1;
	printf("%lu\n", sum2);
	return (0);
}

