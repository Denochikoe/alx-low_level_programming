#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array and a signs a value
 * @size: count
 * @c: char to be asigned
 * Return: NULL or hexadecimal
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
