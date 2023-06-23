#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * free_listint - frees list
 * @head: list to be freed.
 * return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
