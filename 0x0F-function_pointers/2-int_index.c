#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - this function searches for the integer
 *
 * @array: The array of integers
 *
 * @size: The size of the array
 *
 * @cmp: The function pointer
 *
 * Return: returns the count of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) == 1)
			return (i);
		
	return (-1);
}
