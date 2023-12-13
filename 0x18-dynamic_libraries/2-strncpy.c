#include "main.h"
/**
 * _strncpy - to copy astring
 * @dest: pointer  destnation to inputs string
 * @src: pointer destnaton to source
 * @n: numbers of  bytes
 * Return: @dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

