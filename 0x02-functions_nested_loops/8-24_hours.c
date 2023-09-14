#include "main.h"

/**
  * jack_bauer- prints all minutes in the day
 *Description: function to print all minutes
 */

void jack_bauer(void)
{
	int min;
	int hrs;

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hrs / 10) + 48);
			_putchar((hrs % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
