#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes that matches the bytes of
 *  another string.
 *  @s: param 1
 *  @accept: param 2
 *  Return: NULL or the first occurence of a match.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
			if (accept[j])
				return (s + i);
		}
	}
	return (0);
}
