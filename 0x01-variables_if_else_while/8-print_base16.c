#include <stdio.h>

/**
 * main-Entry points
 *
 * Description:'the program outputs hex numerals'
 *
 * Return: Always (0) success
 *
 */
int main(void)
{
	char j;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (j = 'a'; j < 'g'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
