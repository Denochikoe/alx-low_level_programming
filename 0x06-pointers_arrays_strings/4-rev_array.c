#include "main.h"
/**
 * reverse_array - reverses the contents of an array.
 * @a: param 1
 * @n: param 2
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, t;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
