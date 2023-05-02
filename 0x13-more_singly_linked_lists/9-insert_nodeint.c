#include "lists.h"
/**
 * insert_nodeint_at_index - code that insert a new node in linked list
 * @head: head of a linked list
 * @idx: list index where new node is added
 * @n: the integer element
 *
 * Return: address of new node or Null it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *danew;
	listint_t *tempo = *head;

	danew = malloc(sizeof(listint_t));
	if (!danew || !head)
		return (NULL);

	danew->n = n;
	danew->next = NULL;

	if (idx == 0)
	{
		danew->next = *head;
		*head = danew;
		return (danew);
	}

	for (a = 0; tempo && a < idx; a++)
	{
		if (a == idx - 1)
		{
			danew->next = tempo->next;
			tempo->next = danew;
			return (danew);
		}
		else
			tempo = tempo->next;
	}

	return (NULL);
}

