#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *  _strdup - returns a pointer to a newly allocated space in memory.
 *
 * @str: string to be copied
 *
 * Return: Returns null if string is null
*/

char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);
}
