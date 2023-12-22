#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: pointer to the first node
 * @n: data to insert
 * Return: pointer to the new node, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neu;

	neu = malloc(sizeof(listint_t));
	if (!neu)
		return (NULL);

	neu->n = n;
	neu->next = *head;
	*head = neu;

	return (neu);
}

