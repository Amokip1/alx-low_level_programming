#include "lists.h"

/**
 * get_nodeint_at_index - returns a nth node of linked list
 * @head: 1st node in a linked list
 * @index: index node to return
 *
 * Return: if not doesn't exist, return Null.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index && head != NULL; j++)
	{
		head = head->next;
	}

	return (head);
}
