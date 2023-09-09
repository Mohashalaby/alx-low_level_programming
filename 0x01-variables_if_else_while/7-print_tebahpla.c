#include <stdio.h>

/**
*main - entry point
*
* Description: printing all single digits numbers
*
* Return: 0(success)
*
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
