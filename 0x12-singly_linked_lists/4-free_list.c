#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * free_list - frees a node in list_t.
 * @head:param 1.
 * return: void.
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
