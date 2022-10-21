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
	return (0);
}
