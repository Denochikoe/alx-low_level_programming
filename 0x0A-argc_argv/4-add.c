#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds arguments inputed as flags.
 * @argc: counter
 * @argv: vector
 * return: 0, 1 or sum.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if(argc < 0)
	{
		return (0);
	}
	for(i = 1; i < argc; i++)
	{
		if(!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
