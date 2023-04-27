#include <stdlib.h>
#include <string.h>

#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: char to print.
 * @str: new node string.
 *
 * Return: address of new node,NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n;
	list_t *pre = *head;
	unsigned int k = 0;

	while (str[k])
		k++;

	new_n = malloc(sizeof(list_t));
	if (!new_n)
		return (NULL);

	new_n->str = strdup(str);
	new_n->k = k;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}

	while (pre->next)
		pre = pre->next;

	pre->next = new_n;

	return (new_n);
}

