#include "lists.h"

/**
 * pop_listint - deletes a head node of linked list
 * @head:pointer to the 1st element in the linked list
 *
 * Return: if linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	int nu;
	listint_t *k;
	listint_t *curn;

	if (*head == NULL)
		return (0);

	curn = *head;

	nu = curn->n;

	k = curn->next;

	free(curn);

	*head = k;

	return (nu);
}
