#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: param 1
 * @src: param 2
 * @n: param 3
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
