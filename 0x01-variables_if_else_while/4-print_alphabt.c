#include<stdio.h>

/**
*main - entry point
*
* Description: printing alphapet
*
* Return: 0(success)
*
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
