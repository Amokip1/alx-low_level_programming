#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - add a node at the end of a linked list
 * @head: double pointer to the list_t
 * @str: string to put in the new node
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pre;
	list_t *new_node;
	int c;

	pre = *head;
	while (pre && pre->next != NULL)
		pre = pre->next;

	for (c = 0; str[c] != '\0'; c++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = c;
	new_node->next = NULL;

	if (pre)
		pre->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
