#include "list.h"

/**
 * _strlen - returns the length of string
 * @s: string length to check
 * Return: integr length of string
 **/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * print_list - print alinked list
 * @h: point to node
 * Return: size of list
 **/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
