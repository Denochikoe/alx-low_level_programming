#include "main.h"
/**
 * prototype
 *
 * Description- 'the program prints the lowercase alphabet 10 times'
 *
 * Return - void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	  	_putchar('\n');
		i++;
	}
}
