#include <stdio.h>
/**
 * main  - Entry point
 * Description- 'the program print multiples of  3 or 5'
 * Return: Always (0) success
 */
int main(void)
{
	int i;
	int mul;

	for(i= 0; i < 1024; i++)
	{
		if ( i % 3 == 0 || i % 5 == 0)
		{
			mul += i;
		}
	}
	printf("%d\n", mul);
	return (0);
}
