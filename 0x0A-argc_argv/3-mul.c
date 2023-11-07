#include <stdio.h>
#include <stdlib.h>
/**
 * main- print multipication of input.
 * @argc: count
 * @argv: array
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if(argc != 3)
	{
		puts("Error");
		return(1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
	}
	return (0);
}
