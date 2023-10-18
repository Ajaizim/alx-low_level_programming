#include "main.h"
/**
 * print_array - function title
 * @a: first parameter
 * @n: secnd parameter
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

	if (i < n - 1)
		printf(", ");
}
	printf("\n");
}
