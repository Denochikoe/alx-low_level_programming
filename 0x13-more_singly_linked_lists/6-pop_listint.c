#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of the list
 * @head: list to be deleted
 * return: content of the list.
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int i;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	first = *head;
	*head = (*head)->next;
	free(first);
	return (i);
}
