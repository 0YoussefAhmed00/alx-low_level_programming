#include "lists.h"

/**
 * pop_listint - To Delete the head node of a linked list
 * @head: A Pointer to the first element in the linked list
 *
 * Return: Returning  Data inside the elements that was deleted,
 *  if the list is empty returns 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
