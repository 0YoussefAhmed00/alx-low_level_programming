#include "lists.h"

/**
 * listint_len - returning  the number of elements in the  linked lists or size
 * @h: a  linked list of type listint_t to be  traversed
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
