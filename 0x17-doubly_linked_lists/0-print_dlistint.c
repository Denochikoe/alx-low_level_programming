#include "lists.h"
<<<<<<< HEAD
=======
#include <stdio.h>
>>>>>>> 3c3526672cb35ec811b56af1f5f36b5e779b7679

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
<<<<<<< HEAD
 * 
=======
 *
>>>>>>> 3c3526672cb35ec811b56af1f5f36b5e779b7679
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
<<<<<<< HEAD
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return count;
=======
	size_t count = 0;	/* Counter for the number of nodes */

	while (h != NULL)
	{
		printf("%d\n", h->n);	/* Print the current node's data */
		h = h->next;		/* Move to the next node */
		count++;		/* Increment the node counter */
	}

	return (count);		/* Return the total number of nodes */
>>>>>>> 3c3526672cb35ec811b56af1f5f36b5e779b7679
}
