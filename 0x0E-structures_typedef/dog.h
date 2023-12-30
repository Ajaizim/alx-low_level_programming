#ifndef DOG_H
#define DOG_H

/**
 * struct dog - descibes a dog's basic details
 * @name: names the dog
 * @age: tells age of the dog
 * @owner: the owner f the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
