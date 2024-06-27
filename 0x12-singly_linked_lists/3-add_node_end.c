#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * _strlen - returns number of elements in a string
 * @str: string to be counted.
 * Return: number of elements.
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
	{
		;
	}
	return (i);
}
/**
 * add_node_end - add node at the end of the list.
 * @head: double pointer pointing to list.
 * @str: string to be added.
 * Return: pointer to new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
