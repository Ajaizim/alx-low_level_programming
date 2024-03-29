#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name using pointer to function
 * @name: string to add
 * @f: pointer fuunction
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
