#include <stdio.h>

/**
 * main-Entry point
 *
 * Description:'the program outputs all possible hex char'
 *
 * Return: Always (0) success
 *
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
