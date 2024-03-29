#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - shows the numberr of elements of a list
 * @h: A linked list
 *
 * Return: Number of elements of a list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
