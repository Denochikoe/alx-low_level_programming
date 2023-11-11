#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * strup - creates a pointer that duplicates a
 * string
 * @str: param 1
 * Return: allocated pointer or NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	;
	i++;
	newstr = malloc(sizeof(char) * i);
	if (newstr == NULL)
		return(NULL);
	for (j = 0; j < i; j++)
	{
		newstr[j] = str[j];
		return (newstr);
	}
	return (0);
}
