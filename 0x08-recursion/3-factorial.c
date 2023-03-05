#include "main.h"
/**
 * factorial- calculates the factorial of an integer.
 * @n: param 1
 * return:(0) success
 */
int factorial(int n)
{
	if(n < 0)
		return (-1);
	else if(n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
