#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data (n) of
 * a linked list
 * @head: pointer to the first element of the linked list
 * Return: sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		sum += tempo->n;
		tempo = tempo->next;
	}

	return (sum);
}
