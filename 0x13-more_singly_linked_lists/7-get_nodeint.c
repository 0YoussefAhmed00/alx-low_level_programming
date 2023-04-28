#include "lists.h"

/**
 * get_nodeint_at_index - Returning  Node at a certain index in a linked list
 * @head:the First node in the linked list
 * @index: To Return the  index of the node 
 *
 * Return: returning Pointer to the node we're looking for, or return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
