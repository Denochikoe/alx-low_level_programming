<<<<<<< HEAD
#include <stdio.h>
int main(void)
{
	int a = 9, b = 0;
	int val;

	while ( b > 9)
	{
		putchar(val + '0');
		putchar(',');
	}
	putchar('\n');
=======
#include "main.h"
/**
 * times_table - Print the 9 times table, starting with 0
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int x = 0;
	int y;
	int z;

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = x * y;
			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');

				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
>>>>>>> f0aefca0ce98496da1159d4fb57d2f4bf1f884f6
}
