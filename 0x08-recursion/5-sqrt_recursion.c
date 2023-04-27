#include "main.h"
int squareroot(int n, int i);
/**
 * _sqrt_recursion- find squareroot
 * @n:square
 * return:squareroot
 */
int _sqrt_recursion(int n)
{
	if(n < 0)
		return(-1);
	else
		return(squareroot(n, (n + 1) / 2));
}
/**
 * squareroot- finds perfect squares
 * @n:param 1
 * @i:param 2
 * return: square
 */
int squareroot(int n, int i)
{
	if(n < 1)
	return(-1);
	else if(i * i == n)
	return(i);
	else
	return(squareroot(n, i - 1));
}
