#include "main.h"
/**
 * print_number- prints an integer.
 * @n: integer param
 * Return: Always (0) success
 */
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
