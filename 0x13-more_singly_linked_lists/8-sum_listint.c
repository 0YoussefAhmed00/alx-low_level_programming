#include "lists.h"

/**
 * sum_listint - Calculateing  sum of all the Data in a listint_t list
 * @head: The First node in the linked list
 *
 * Return: The Resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
