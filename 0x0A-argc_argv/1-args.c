#include <stdio.h>
/**
 * main- prints number of argc.
 * @argc: param 1
 * @argv:  param 2
 * return: 0 or 1
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return(0);
}

