#include "main.h"
/**
 * print_rev- prints a atring in reverse.
 * s@: pointer to char, param
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
