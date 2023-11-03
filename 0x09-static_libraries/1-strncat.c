#include "main.h"
/**
 * _strncat - concatenates two strings upto n bytes
 * @dest: param 1
 * @src: param 2
 * @n: param 3
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
	i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
	{
		*(dest + i) = *(src + j);
	}
	return (dest);
}

