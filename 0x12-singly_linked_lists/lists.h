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
#endif /* _LISTS_H_ */
