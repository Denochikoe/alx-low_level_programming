#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newptr;
	char *p = ptr;
	unsigned int max = new_size;

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		return(newptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return(NULL);
	}
	else if (new_size == old_size)
	{
		return(ptr);
	}

	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		return(NULL);
	}
	if (new_size > old_size)
	{
		max = old_size;
	}
	for(i = 0; i < max; i++)
	{
		newptr[i] = p[i];
		free(ptr);
	}
	return(newptr);

}
