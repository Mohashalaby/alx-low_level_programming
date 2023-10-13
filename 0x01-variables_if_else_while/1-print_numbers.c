#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with separator
 * @separator: string
 * @n: number og arguments
 * @...:  integers to prunt it
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int e = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (e--)
		printf("%d%s", va_arg(ap, int),
			! ? (separator ? separator : "") : "\n");
	va_end(ap);
}
