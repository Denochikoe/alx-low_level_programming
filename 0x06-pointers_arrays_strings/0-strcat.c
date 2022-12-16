#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: pointer to char
 * @src: pointer to a char
 * Return: destination string.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
