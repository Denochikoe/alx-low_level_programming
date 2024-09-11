#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a doubly linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to delete (starting from 0).
 *
 * Return: 1 if successful, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;
	
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		dlistint_t *temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	current = *head;
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return (1);
}
