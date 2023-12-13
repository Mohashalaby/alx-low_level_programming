#include "main.h"
/**
 * _strlen - to get alenth of string
 * @s: the string parameters for the function
 * Return: lenth of string
 **/
int _strlen(char *s)
{
	int count;

	for  (count = 0; *s != '\0'; s++)
		+count++;
	return (count);
}
