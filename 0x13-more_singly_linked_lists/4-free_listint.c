#include <lists.h>
/**
 * free_listint - Fress a linked list
 * @head: The head of list to be freed
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tempo;

	while ((tempo = head) != NULL)
	{
		head = head->next;
		free(tempo);
	}
}
