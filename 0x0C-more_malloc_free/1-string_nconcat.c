#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * sting_nconcat - A function that concatenates two string
 *
 * @s1: the first string
 *
 * @s2: the second string
 *
 * @n: the integer
 *
 * Return: returns the concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i;
	unsigned int lenght1 = 0;
	unsigned int lenght2 = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		lenght1++;

	for (i = 0; s1[i] != '\0'; i++)
		lenght2++;

	output = malloc(sizeof(char) * (lenght1 + n) + 1);
	if (output == NULL)
		return (NULL);
	if (n >= lenght2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			output[lenght1 + i] = s2[i];
		output[lenght1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; i < n; i++)
			output[lenght1 + i] = s2[i];
		output[lenght1 + i] = '\0';
	}
	return (output);
}
