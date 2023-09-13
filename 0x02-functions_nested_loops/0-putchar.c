#include "main.h"

/**
 * main - Entry point
 *
 * Description: to use function _putchar to print astring
 *
 * Return: return o success
 *
 */


int main(void)
{

	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	_putchar(str[ch]);
_putchar('\n');

	return (0);
}
