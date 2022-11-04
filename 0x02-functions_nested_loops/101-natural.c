#include <stdio.h>
/**
 * main - Entry point
 * Description- 'the program print multiples of  3 or 5 between 1024'
 * Return: Always (0) success.
 */
int main(void)
{
	int n;
	int mul;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			mul += n ;
		}
	}
	printf("%d\n", mul);
	return (0);
}
