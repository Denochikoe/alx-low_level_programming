#include <stdio.h>

/**
 * main-Entry point
 *
 * Description: 'the program that outputs single dig of base 10'
 *
 * Return: Always (0) success
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		j = i * 10;
		if (j <= 9)
		{
			printf("%d", j);
		}
	}
	putchar('n');
	return (0);
}
