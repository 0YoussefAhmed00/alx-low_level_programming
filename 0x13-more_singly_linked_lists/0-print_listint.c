#include "lists.h"

/**
 * print_listint - printing the elements of the linked list
 * @h: a linked list of the type listint_t to print it
 *
 * Return:to  number of the  nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
