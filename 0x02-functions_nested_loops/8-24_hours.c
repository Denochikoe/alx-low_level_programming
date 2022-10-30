#include "main.h"
/**
 * jack_bauer  - prints every minute for a day
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int time;
	int b = 0, a = 0, j = 0, i = 0;

	while (time < 1440)
	{
		_putchar(i + '0');
		_putchar(j + '0');
		_putchar(':');
		_putchar(a + '0');
		_putchar(b + '0');
		b++;

		if (b > 9)
		{
			b = 0;
			a++;
		}
		if (a > 5)
		{
			a = 0;
			j++;
		}
		if (j > 9)
		{
			j = 0;
			i++;
		}
	time++;
	}
}
