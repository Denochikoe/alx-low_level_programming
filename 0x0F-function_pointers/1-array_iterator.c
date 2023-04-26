#include "function_pointers.h"
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
