#include <stdio.h>
#include <stdlib.h>
#include "main.h"
char **strtow(char *str)
{
	int i, j;
	char *ptr;
	char **tab;

	if (str == NULL)
		return NULL;
	for (i = 0; str[i]; i++)
	;
	tab = &ptr;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return NULL;
	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
		if (ptr[j++] == '\0')
		{

			return (&ptr);
		}
		return(tab);
	}
}
