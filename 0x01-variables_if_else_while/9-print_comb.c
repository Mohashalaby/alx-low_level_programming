#include <stdio.h>

/**
*main - entry point
*
* Description: printing 0 ,1
*
* Return: 0(success)
*
*/

int main(void)
{
	int y = 0;

	while (y <= 9)
	{
		putchar(y + 48);

		if (y != 9)
		{
			putchar(',');
			putchar(' ');
		}
		y++;
	}
	putchar('\n');
	return (0);
}
