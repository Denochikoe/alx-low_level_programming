#include <stdio.h>

/**
 *main-Entry point
 *
 *Description: 'the program outputs sizeof different data types'
 *
 *Return: Always (0) (Success)
 */
int main(void)
{
	char character;
	int integer;
	long int along;
	long long int along_long;
	float afloat;

	printf("Size of a char: %lu bytes(s)\n"sizeof(character));
	printf("Size of an int: %lu bytes(s)\n"sizeof(integer));
	printf("Size of a long int: %lu bytes(s)\n"sizeof(along));
	printf("Size of a long long int: %lu byte(s)\n"sizeof(along_long));
	printf("Size of a float: %lu byte(s)\n"sizeof(afloat));
	return (0);
}

