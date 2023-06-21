#include <stdio.h>
#include "lists.h"
/**
 * listint_len - prints number of elements.
 * @h: list to print.
 * Return: number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return(count);
}
