#include "main.h"

/**
 * _strlen - calculate the length of a string.
 *
 * @s: the string to calculate it's length.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int i;
	int line = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		line++;
	}
	return (line);
}
