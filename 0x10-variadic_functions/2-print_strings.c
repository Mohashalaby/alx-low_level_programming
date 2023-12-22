#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: make string separated
 * @n: numbers of args
 * @...: string to print
 * Return: void
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int t = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (t--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				t ? (separator ? separator : "") : "\n");
			va_end(ap);
}
