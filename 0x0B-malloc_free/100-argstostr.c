#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - A function that concatenates the arguments of a program
 *
 * @ac: argc
 *
 * @av: argv
 *
 * Return: returns to 0
*/

char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *output;
	int count = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}
	output = malloc(sizeof(char) * count);
	if (output == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			output[k] = av[i][j];
			k++;
		}
		output[k++] = '\n';
	}
	output[k] = '\0';
	return (output);
}

