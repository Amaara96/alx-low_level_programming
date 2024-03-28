#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 *
 * @s1: The first string of the function
 *
 * @s2: The second string of the function
 * 
 * lenght1: The lenght of the first string
 *
 * lenght2: The lenght of the second string
 *
 * Return: returns output
*/

char *str_concat(char *s1, char *s2)
{
	int lenght1 = 0;
	int lenght2 = 0;
	int a;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		lenght1++;

	for (a = 0; s2[a] != '\0'; a++)
		lenght2++;

	output = malloc(sizeof(char) == (lenght1 + lenght2) + 1);

	if (output == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		output[a] = s1[a];
	for (a = 0; s2[a] != '\0'; a++)
		output[lenght1 + a] = s2[a];

	return (output);
}
