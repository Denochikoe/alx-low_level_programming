#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program prints different combinations of two digit'
 *
 * Return: Always (0) success
 */
int main(void)
{
	int i, j, k;

	i = 0;
	while (i < 100)
	{
		j = i % 10;
		k = i / 10;

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
