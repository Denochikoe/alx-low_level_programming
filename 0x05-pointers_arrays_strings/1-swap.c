#include "main.h"
/**
 * swap_int- swaps two pointers to an int.
 * @a- pointer to an integer param1
 * @b- pointer to an integer param2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int a1;

	a1 = *a;
	*a = *b;
	*b = a1;
}
