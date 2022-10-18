#include <stdio.h>

/**
 *main-Entry point
 *
 * Description: 'the program outputs {a..z} in one line!'
 *
 * Return: Always (0) success
 *
 */
int main(void)
{
	char i;

	i = 'a';

		while (i <= 'z')
		{
			putchar(i);
			i++;
		}
			putchar('\n');

	return (0);
}

