#include <stdio.h>

/**
 *main-Entry point
 *
 *Description: 'the program outputs sizeof different data types'
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char:\t%lu\n bytes(s)", sizeof(char));
	printf("Size of an int:\t%lu\n bytes(s)", sizeof(int));
	printf("Size of a long int:\t%lu\n bytes(s)", sizeof(long int));
	printf("Size of a long long int:\t%lu\n byte(s)", sizeof(long long int));
	printf("Size of a float:\t%lu\n byte(s)", sizeof(double));
	return (0);
}

