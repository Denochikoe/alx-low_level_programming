#include <stdio.h>
/**
 * main- prints number of argc.
 * @argc: param 1
 * @argv:  param 2
 * return: 0 or 1
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
