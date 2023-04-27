#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: param 1
 * @s2: param 2
 * Return: difference between the two strings.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}
