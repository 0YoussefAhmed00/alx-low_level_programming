#include "lists.h"

/**
 * free_listint - Freeing the linked list
 * @head: listint_t The list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
