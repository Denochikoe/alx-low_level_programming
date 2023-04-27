#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if(size == 0)
		return(NULL);
	if(arr == NULL)
		return(NULL);
	for(i = 0; i < size; i++)
	{
		arr[i] = c;
		return(arr);
	}
	return(0);
}
