#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index at which to insert the new node (starting from 0).
 * @n: The data (n) to be inserted in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;
	if (current == NULL || (current->next == NULL && i + 1 != idx))
		return (NULL);
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
