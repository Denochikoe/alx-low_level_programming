#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list.
 * @head: list to be freed
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
