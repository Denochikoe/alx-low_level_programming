#include "main.h"
/**
 * *string_toupper - changes lowercase to uppercase.
 * @s: param 1
 * Return: an array of characters.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && (*(s + i) <= 'z'))
		*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
