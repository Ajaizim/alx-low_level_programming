#include "main.h"

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
	return (0);

}
