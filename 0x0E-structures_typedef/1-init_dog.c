#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a struct dog variable type
 * @d: points to the struct dog variable
 * @name: the name to initialize
 * @age: age to initialize
 * @owner: the owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
