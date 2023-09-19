include "main.h"
/**
 * *_strcpy - copy astring pointed to src
 * @dest: char that type a string
 * @src: char that type astring
 * Description: to copy astring pointed by
 *              pointer src to the buffer pointed to dest
 *Return: pointer to 'dest'
 **/
char *_strcpy(char *dest, char *src)
{
	int y = -1;

	do {
		y++;
		dest[y] = src[y];
	} while (src[y] != '\0');

	return (dest);

}
