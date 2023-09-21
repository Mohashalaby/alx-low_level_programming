#include "main.h"
/**
 * _strcat -  appends the src string to the dest string,
 *                      overwriting the terminating null byte
 *@dest: pointer to destinition input
 * @src: pointer to source input
 * Returen: dest
 **/
char *_strcat(char *dest, char *src)
{
	int i, x;

	i = 0;

	while (dest[i])
		i++

			for (x = 0; src[x] ; x+)
				dest[i++] = src[x];
	return (dest);
}

