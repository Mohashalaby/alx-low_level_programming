#include "main.h"
/**
 * print_array - print an elements of the array of integers
 * @n: elements parameters input
 * @a: string parameters input
 **/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d",  a[i]);
	}
	printf('\n');
}
