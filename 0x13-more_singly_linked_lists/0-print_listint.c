#include "lists.h"

/**
 * print_listint - Print elements of a linked list.
 * @h: linked list head to print.
 *
 * Return: the numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
