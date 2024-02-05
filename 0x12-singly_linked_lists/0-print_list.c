#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints the elements of a list_t list
 * @h: Tee list_t list to be printed
 *
 * Return: the number of nodes n h.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->strr == NULL)
			ptint("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);
}