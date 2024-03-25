#include "main.h"
#include <stdlib>

/**
 * create_array - Creates an array of chars(a specific char is initialized)
 *
 * @size: The size of the array
 *
 * @c: The variable
 *
 * Return: Returns null if size = 0
*/

char *create_array(unsigned int size, char c)

{
	unsigned int a;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
		arr[a] = c;

	return (arr);
}
