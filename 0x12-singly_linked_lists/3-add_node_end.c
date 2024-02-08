#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - it adds a node at the end of the list_t list
 * @head: The head of the linked list
 * @str:  The string to be stored in the list
 *
 * Return: The address to the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw_node, *current_node;
	size_t n;

	nw_node = malloc(sizeof(list_t));
	if (nw_node == NULL)
		return (NULL);

	nw_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	nw_node->len = n;
	nw_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = nw_node;
	}

	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = nw_node;
	}
	return (*head);
}
