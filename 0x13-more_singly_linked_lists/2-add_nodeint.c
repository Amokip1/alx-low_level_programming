#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: First node pointer in the list.
 * @n: data element.
 *
 * Return: the pointer the new element, NUll if it fails
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

