#include <stdio.h>
#include <stdlib.h>
void _opcode(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	int n;

	if (argc < 3)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	_opcode((char *)&main, n);
	return(0);
}
