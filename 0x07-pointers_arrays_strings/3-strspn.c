#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: param 1
 * @accept: param 2
 * Return: bytes of prefix.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
			if (!accept[j])
				break;
		}
	}
	return (i);
}
