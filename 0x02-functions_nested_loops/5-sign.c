#include "main.h"
#include <stdio.h>
/**
 * print_sign- prints sign of a number
 *
 * Return: 1 , 0 or -1.
 */
int print_sign(int n)
{
	char add, zero, sub;

	add = '+';
	zero = '0';
	sub = '-';
	if (n > 0)
	{
		_putchar(add);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(zero);
		return (0);
	}
	else
	{
		_putchar(sub);
		return (-1);
	}
}
