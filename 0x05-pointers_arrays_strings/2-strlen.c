#include "main.h"

/**
 * _strlen - name of function
 * @s: function parameter
 * Return: the string length
 */

int _strlen(char *s)
{
int i;
int count = 0;

for (i = 0; s[i] != '\0'; i++)
	count++;
return (count);

}
