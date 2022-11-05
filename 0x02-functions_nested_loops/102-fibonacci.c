#include <stdio.h>
/**
 * main - Entry point
 * Description- 'the program prints the first 50 fibonacci numbers'
 * Return: Always  (0) success
 */
int main(void)
{
	int i, j, k, next;

	 j = 1;
	 k = 2;
	for (i = 1; i <= 50; i++)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
