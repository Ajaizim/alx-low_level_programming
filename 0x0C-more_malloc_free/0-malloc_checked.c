#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory with malloc
 * @b: input int
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
