#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen: finds the length of str
 * @str: string to be counted.
 * Return: return the counter value.
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
 * add_node - adds a new node to list (beginning).
 * @head - double pointer to the new node.
 * @str - pointer to be added to new node.
 * return: pointer to new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
	{
		return (NULL);
	}
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
	new->next = *head;
	*head = new;
	return (new);

}
