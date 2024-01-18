#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;

		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * allocate_and_copy - helper function to allocate memory and copy a substring
 * @start: start index of the substring
 * @end: end index of the substring
 * @str: input string
 *
 * Return: pointer to the new substring
 */

char *allocate_and_copy(int start, int end, char *str)
{
	char *tmp = malloc(sizeof(char) * (end - start + 1));

	if (tmp == NULL)
		return (NULL);

	for (int i = start; i < end; i++)
		tmp[i - start] = str[i];

	tmp[end - start] = '\0';
	return (tmp);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (str[len])
		len++;

	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = allocate_and_copy(start, end, str);

				if (tmp == NULL)
					return (NULL);

				matrix[k] = tmp;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;

	return (matrix);
}


/**
 * main - Entry point of the prgram
 *
 * Return: 0
 */

int main(void)
{
	char input[] = "This is a sample string";
	char **result = strtow(input);

	if (result != NULL)
	{
		for (int i = 0; result[i] != NULL; i++)
		{
			printf("Word %d: %s\n", i + 1, result[i]);
			free(result[i]);
		}

		free(result);
	}
	else
	{
		printf("Error in strtow\n");
	}

	return (0);
}
