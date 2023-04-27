#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: param 1
 * @c: param 2
 * Return: a pointer of characters.
 */
char *_strchr(char *s, char c)
{
	int i;

	i  = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		if (*(s + i) == c)
		return (s + i);
		i++;
	}
	return (0);
}
