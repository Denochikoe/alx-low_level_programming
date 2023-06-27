#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index- return the nth node of a list.
 * @head: list
 * @index: index of the node to be returned
 * Return: nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return NULL;
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return(head);
}
