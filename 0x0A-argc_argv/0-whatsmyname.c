#include <stdio.h>
/**
 * main - function to print its name, followed by a new ine
 * @argc: number of command line argument
 * @argv: array that holds the command argument
 *
 * Retun: (0)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}