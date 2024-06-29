#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index- inserts a new node at a given position.
 * @head: pointer to list.
 * @idx: index of node the new node is added
 * @n: element of the new node.
 * Return: address to new node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *new;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; current && i < idx - 1; i++)
	{
		current = current->next;
	}

	if (!current)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
