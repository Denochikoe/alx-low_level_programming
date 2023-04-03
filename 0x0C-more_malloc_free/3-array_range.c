#include <stdlib.h>
#include "main.h"
#include <stdio.h>
int *array_range(int min, int max)
{
	int i, j;
	int *array;

	if(min > max)
		return(NULL);

	j = (max - min) + 1;
	array = malloc(sizeof(int) * j);
	if(array == NULL)
		return(NULL);
	for(i = 0; i < j; i++, min++)
	{
		array[i] = min;
	}
	return(array);
}
