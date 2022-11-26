#include "main.h"
/**
 * _strcpy- copies the string src including '\0' to dest
 * @dest: pointer to char, param1.
 * @src: pointer to a character, param2
 * Return: Always (0) success.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
