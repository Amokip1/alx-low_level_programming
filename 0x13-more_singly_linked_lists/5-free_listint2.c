#include "lists.h"

/**
 * free_listint2 - code that frees a linked list
 * @head: head of a list to be freed
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *j;

	if (head == NULL)
		return;

	while (*head)
	{
		j = (*head)->next;
		free(*head);
		*head = j;
	}

	*head = NULL;
}
