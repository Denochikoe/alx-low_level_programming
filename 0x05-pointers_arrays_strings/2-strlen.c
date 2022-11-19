#include "main.h"
/**
 * _strlen- counts pointers length
 * @s: pointer to a character param
 * Return: Always 0 success
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; ; i++)
	{
		count++;
		if (s[i] == '\0')
		{
			break;
		}
	}
	return (count - 1);
}
