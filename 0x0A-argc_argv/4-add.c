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
	int j;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; j < argv[i][j]; j++)
		{
			if(isdigit(argv[i][j]) == 0)
			{
				printf("%s\n", "Error");
				return(1);
			}
			sum += atoi(argv[i]) + atoi(argv[j]);
		}
		printf("%i\n", sum);
		return(0);
	}
}
