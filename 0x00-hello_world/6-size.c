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
	printf("Size of a char:\b%lu\n", sizeof(char));
	printf("Size of an int:\b%lu\n", sizeof(int));
	printf("Size of a long int:\b%lu\n", sizeof(long int));
	printf("Size of a long long int:\b%lu\n", sizeof(long long int));
	printf("Size of a float:\b%lu", sizeof(double));
	return (0);
}

