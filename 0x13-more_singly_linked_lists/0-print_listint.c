#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the elements of a listint_t list
 * @h: A pointer t the list_t
 *
 * Return: number of nodes in list_t
 */

size_t print_listint(const listint_t *h);
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
