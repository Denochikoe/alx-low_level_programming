#include <stdio.h>
/**
 * main - Entry point.i
 * Description- 'the program prints FizzBuzz for multiples of 3 and 5, 
 * Fizz for multiples of 3 and Buzz for multiples of 5 else print number.
 * Return: Always (0) success
 */
int main(void)
{
	int y;
	int z;

	z = 100;
	for (y = 1; y <= z; y++)
	{
		if (y % 3 == 0 && y % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (y % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (y % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", y);
		}
	}
	printf("\n");
	return (0);
}
