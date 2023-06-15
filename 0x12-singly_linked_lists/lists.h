#ifndef _LISTS_H_
#define _LISTS_H_
#include <stddef.h>
/**
 * struct list_s - struct that stores a string, an integer and a poin
 * ter
 * @str: stores string to be printed.
 * @len: stores length of string.
 * @next: pointer to the next node.
 * Return: transverse of str.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
unsigned int _strlen(char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif /* _LISTS_H_ */
