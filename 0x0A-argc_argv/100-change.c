#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change...
 * @argc: counts the number of arrguments
 * @argv: array that points to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, mincoin = 0;

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		if (cents >= 10)
			cents -= 10;
		if (cents >= 5)
			cents -= 5;
		if (cents >= 2)
		       cents -= 2;
		if (cents >= 1)
		       cents -= 1;
		mincoin += 1;
	}
	printf("%d\n", mincoin);
	return (0);
}
