#include "main.h"
/**
 *_strncat - to concatonaties two strings
 * @dest: pointer to destnation input
 * @src: pointer to source
 * @n: numbers of bytes
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	while (dest[a])
		a++;
	for (b = 0; b < n && src[b] != '\n'; b++)
		dest[a + b] = src[b];
	dest[a + b] = '\0';
	return (dest);
}
