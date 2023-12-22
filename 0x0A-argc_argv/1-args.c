#include <stdio.h>

/**
 * main - Prints the number of arguments for itself
 * @argc: counts number of arguments
 * @argv: Marks available arguments
 *
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);

}


