#include <stdio.h>
/**
 * main- prints input.
 * @argc: param 1
 * @argv: param 2
 * Return: 0 success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i >= 0)
			printf("%s\n", argv[i]);
	}
	return (0);
}
