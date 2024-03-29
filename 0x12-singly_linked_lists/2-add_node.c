#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a node at the beginning of a list
 * @head: Originial linked list
 * @str: the string to be added to the node
 *
 * Return: The new list address else null if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}

