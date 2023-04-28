#include "function_pointers.h"
#include <stdlib.h>
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j)
			{
				break;
			}
		}
		if (i < size)
			return(i);
	}
	return(-1);
}
