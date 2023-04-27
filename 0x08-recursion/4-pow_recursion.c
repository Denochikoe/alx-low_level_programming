#include "main.h"
/**
 *_pow_recursion - prints x to the power of y.
 * @x:param 1
 * @y:param 2
 * return: (0) success.
 */
int _pow_recursion(int x, int y)
{
	if(y < 0)
		return(-1);
	else if(y == 0)
		return (1);
	else
		return(x * _pow_recursion(x, y - 1));
}
