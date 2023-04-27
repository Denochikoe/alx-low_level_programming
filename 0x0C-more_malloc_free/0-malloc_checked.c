#include <stdlib.h>
#include "main.h"
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(sizeof(b));
	if(array == NULL)
	{
		exit(98);
	}
	return(array);
}
