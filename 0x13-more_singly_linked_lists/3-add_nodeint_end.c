#include "lists.h"

/**
 * add_nodeint_end -  Add node at the end of a linked list
 * @head: First element pointer in the list
 * @n: data for the new element
 *
 * Return: address of the new element, NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newest;
	listint_t *tempo;

	(void)tempo;

	newest = malloc(sizeof(listint_t));

	if (newest == NULL)
		return (NULL);

	newest->n = n;
	newest->next = NULL;
	tempo = *head;
	if (*head == NULL)
	{
		*head = newest;
	}
	else
	{
		while (tempo->next != NULL)
		{
			tempo = tempo->next;
		}
		tempo->next = newest;
	}

	return (*head);
}
