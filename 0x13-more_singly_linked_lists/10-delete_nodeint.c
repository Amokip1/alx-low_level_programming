#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node in linked list
 * @head: pointer to the first node in the list
 * @index: index of node to delete
 *
 * Return: 1 on success or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pre = *head;
	listint_t *front = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(pre);
		return (1);
	}

	while (k < index - 1)
	{
		if (!pre || !(pre->next))
			return (-1);
		pre = pre->next;
		k++;
	}
	front = pre->next;
	pre->next = front->next;
	free(front);

	return (1);
}

