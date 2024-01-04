#include <stdio.h>
#include "dog.h"

/**
 * print_dog - rints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == 0)
		d->age = 0;
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("name:%s\n age:%f\n owner:%s\n", d->name, d->age, d->owner);
}
