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
	unsigned int j;
	listint_t *pre;
	listint_t *front;

	pre = *head;

	if (index != 0)
	{
		for (j = 0; j < index - 1 && pre != NULL; j++)
		{
			pre = pre->front;
		}
	}

	if (pre == NULL || (pre->front == NULL && index != 0))
	{
		return (-1);
	}

	front = pre->front;

	if (index != 0)
	{
		pre->front = front->front;
		free(front);
	}
	else
	{
		free(pre);
		*head = frontt;
	}

	return (1);
}
