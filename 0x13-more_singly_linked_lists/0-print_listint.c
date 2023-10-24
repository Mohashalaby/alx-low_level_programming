#include "lists.h"

/**
 * print_listint - prink alisted link
 * @h: pointer to the first node
 * Return: size of list
 **/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

