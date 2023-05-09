#include "function_pointers.h"
/**
 * int_index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == '\0')
			{
				break;
			}	
		}
		if (i < size)
			return(i);
	}
	return(-1);
}
