<<<<<<< HEAD
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
=======
#include <stdio.h>
#include "main.h"
/**
 * main-Entry point
 *
 * Description: 'the program outputs lowercase alphabets'
 *
 * Return: (0) success
 *
 */
void print_alphabet(void);
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
>>>>>>> e8fd24ac825c6d5e233a6f3f5fdcf946fc20ff8a
	return (0);
}
