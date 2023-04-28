#include "lists.h"

/**
 * free_listint2 - Freeing the linked list
 * @head: A Pointer to the listint_t List to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
