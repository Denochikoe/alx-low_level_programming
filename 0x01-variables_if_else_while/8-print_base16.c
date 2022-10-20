#include <stdio.h>

/**
 * main-Entry points
 *
 * Description:'the program outputs hex numerals'
 *
 * return always (0) success
 *
 */
int main(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j + '0');
	}
	putchar('\n');
	return (0);
}
