#include <stdio.h>

/**
 * main-Entry point
 *
 * Description:'the program reverses 9-0'
 *
 * Return: Always (0) success
 *
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
