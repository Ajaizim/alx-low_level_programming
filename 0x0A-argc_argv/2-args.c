#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: counts te numbeer of arguments
 * @argv: Lists strings and pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
