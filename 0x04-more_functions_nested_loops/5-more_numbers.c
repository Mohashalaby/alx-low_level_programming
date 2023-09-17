#include "main.h"
/**
 * more_numbers - print more numbers in rows
 *                         an example 1-14 10 times
 *
 * Return: when return 0 always success
 */
void more_numbers(void)
{
int num1, num2, sum;

	for (num2 = 1; num2 <= 10; num2++)
	{
		for (sum = 0; sum <= 14; sum++)
		{
			num1 = sum;
			if (sum > 9)
			{
				_putchar(1 + 48);
				num1 = sum % 10;
			}
			_putchar(num1 + 48);
		}
		_putcchar('\n');




	}
}
