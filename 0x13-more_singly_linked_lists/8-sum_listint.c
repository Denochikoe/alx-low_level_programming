#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint- sum of all data in list.
 * @head: list
 * Return: sum of all data n.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
