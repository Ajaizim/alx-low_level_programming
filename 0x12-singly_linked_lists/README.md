#0x12. C - Singly linked lists


0. Print list
A function that prints all the elements of a list_t list.
Prototype: size_t print_list(const list_t *h);*


1. List Length
A function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h); .*


2. Add node
*A function that adds a new node at the beginning of a list_t list.
Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed*


3. Add node at the end
*A function that adds a new node at the end of a list_t list.
Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed*


4. Free list
*A function that frees a list_t list.
Prototype: void free_list(list_t *head);*



