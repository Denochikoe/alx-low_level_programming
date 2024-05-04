#include "function_pointers.h"
/**
 * int_index - returns index of element that matches the cmp function
 * @array: stores array to be checked
 * @size: length of array
 * @cmp: calls the compare function
 * Return: -1 or index on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return(-1);
}
