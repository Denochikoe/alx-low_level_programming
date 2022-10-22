#include <stdio.h>

/**
 * main-Entry point
 *
 * Description:'the program outputs 1-9'
 *
 * Return: Always (0) success
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
