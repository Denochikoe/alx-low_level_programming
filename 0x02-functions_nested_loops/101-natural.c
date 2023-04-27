#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Entry point
 * Description- 'the program print multiples of  3 or 5 between 1024'
 * Return: Always (0) success.
 */
int main(void)
{
	int n;
	int mul;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			mul += n ;
=======
 * main  - Entry point
 * Description- 'the program print multiples of  3 or 5'
 * Return: Always (0) success
 */
int main(void)
{
	int i;
	int mul;

	for(i = 0; i < 1024; i++)
	{
		if ( i % 3 == 0 || i % 5 == 0)
		{
			mul += i;
>>>>>>> f0aefca0ce98496da1159d4fb57d2f4bf1f884f6
		}
	}
	printf("%d\n", mul);
	return (0);
}
