#include "main.h"
/**
 * _isalpha- program checks for alphabetic character
 *
 * Return: (1) or (0)
 */
int _isalpha(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
