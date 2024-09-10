#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;	/* Counter for the number of nodes */

	while (h != NULL) {
		printf("%d\n", h->n);	/* Print the current node's data */
		h = h->next;		/* Move to the next node */
		count++;		/* Increment the node counter */
	}

	return (count);		/* Return the total number of nodes */
}
