#include "main.h"
#include <stdio.h>
/**
 * _isupper- 'the program checks for uppercase character'
 * @c: Variable text
 * Return: (0) or (1)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
