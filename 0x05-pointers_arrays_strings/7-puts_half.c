#include "main.h"
/**
 * puts_half- prints half of a string.
 * @str: pointer to a char, param
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	j = i / 2;
	if (i % 2)
	j += 0;
	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
