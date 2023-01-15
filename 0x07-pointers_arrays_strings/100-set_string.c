#include "main.h"
/**
 * set_string - sets a value to a pointer.
 * @s: param 1
 * @to: param 2
 * Return: pointer to a memory address.
 */
void set_string(char **s, char *to)
{
	int i;

	i = 0;
	while (*(to + i))
	i++;
	*s = to;
}
