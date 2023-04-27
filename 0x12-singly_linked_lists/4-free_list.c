#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: Head of list_t to be freed
 */
void free_list(list_t *head)
{
	list_t *pre;

	while (head)
	{
		pre = head->next;
		free(head->str);
		free(head);
		head = pre;
	}
}

