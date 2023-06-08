#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all the elements of a of list_s.
 * @h: pointer to start of list_s.
 * Return: number of nodes in list_s.
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", tmp->len, tmp->str);
		tmp  = tmp->next;
		}
	}
	return (i);
}
