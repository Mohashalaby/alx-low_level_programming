#include <stdio.h>

/**
*main - entry point
*
* Description: printing numbers of base 16 lowercase
*
* Return: 0(success)
*
*/

int main(void)
{
	int x = 48;

	while (x <= 102)/*48 is decimal for 0 and 102 is decimal of f*/
	{
		putchar(x);

		if (x == 57)
			x += 39;
		x++;
	}
	putchar('n');
	return (0);
}
