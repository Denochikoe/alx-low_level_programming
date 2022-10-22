#include "main.h"

/**
 * print_alphabet- Prints the alphabet in lowercase followed by a new line.
 *
 * you can use 'putchar' once.
 *
 * Return: Always (0) success.
 *
 */
void print_alphabet(void)
{
	char j;

	j = 'a';
	while (j <= 'z')
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
