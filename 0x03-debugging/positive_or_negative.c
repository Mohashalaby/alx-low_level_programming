#include "main.h"

/**
* main - entry point
*
* Description: false or true validition
*
* Return: 0 
*/

void positive_or_negative(int i)
{
        if (i > 0)
                printf("%d is positive\n", i);
  
	else if (i < 0)
                printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

        return (0);
}
