#include <stdio.h>

/**
 * main-Entry point
 *
 * Description: 'the program outputs {a..z}{A..Z} in one line!'
 *
 * Return: Always (0) success
 */
int main(void)
{
	char i;
	char j;

	i = 'a';
	j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
		
		while (j <= 'Z')
		{
			putchar(j);
			j++;
		}
	int putchar("i\\n + j\n");
	return (0);
}
