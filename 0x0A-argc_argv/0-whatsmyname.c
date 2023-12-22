#include <stdio.h>
/**
 * main - function to print its name, followed by a new ine
 * @argc: number of command line argument
 * @argv: array that holds the command argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
