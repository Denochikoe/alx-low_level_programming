#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the largest prime factor of a number'
 * Return: Always (0) success
 */
int main(void)
{
	long int a;
	long int z;

	z = 612852475143;
	for (a = 2; a < z; a++)
	{
		while (z % a == 0)
		{
			z = z / a;
		}
	}
		printf("%lu\n", z);
		return (0);
}
