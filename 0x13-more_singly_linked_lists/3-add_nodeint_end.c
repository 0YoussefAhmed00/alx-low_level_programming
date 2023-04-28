#include "lists.h"

/**
 * add_nodeint_end - adding a node at the end of a linked list and after it null
 * @head: a Pointer to the first element in  list
 * @n: the Data to insert  New element
 *
 * Return: a  Pointer to the new Node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
