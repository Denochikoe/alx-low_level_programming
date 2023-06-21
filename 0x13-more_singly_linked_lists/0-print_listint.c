#include <stdio.h>
#include "lists.h"
/**
 * print_listint - number of elements and interger.
 * @h - list of elements.
 * return: number of elements and integer.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
