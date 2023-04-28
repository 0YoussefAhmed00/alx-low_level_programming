#include "lists.h"

/**
 * add_nodeint - to add  a new node at the beginning of the created linked list
 * @head: a pointer to the initial node in the list
 * @n: variable for the  data to insert in that new node
 *
 * Return: returning the  pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
