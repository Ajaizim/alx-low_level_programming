#ifndef LINKED
#define LINKED

#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - A singly linked list
 * @str: string
 * @len: length of string
 * @next: point to he nex node
 *
 * note: singly linked list structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}
list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *st);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void first(void);

#endif
