#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
<<<<<<< HEAD
 * Return: Always 0
=======
 * Return: Always 0.
>>>>>>> f0aefca0ce98496da1159d4fb57d2f4bf1f884f6
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
