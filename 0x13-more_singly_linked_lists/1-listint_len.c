#include "lists.h"

/**
 * listint_len - the number of elements in a linked list
 * @h: the head of a linked list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
