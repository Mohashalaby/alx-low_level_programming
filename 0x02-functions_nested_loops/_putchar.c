#include <unistd.h>

#include "main.h"

/**
* _putchar  - write  the charachter c to stdout
* @c: the charachter to print
*
*Return: On success 1 , -1 on error
*Description: this methode _putchar to print astring
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
