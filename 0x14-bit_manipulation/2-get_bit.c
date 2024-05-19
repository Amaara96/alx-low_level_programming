#include "main.h"
#include <stddef.h>

/**
 * get_bit - A function that returns the value of any given bit
 *
 * @index: The pointer to be returned
 *
 * @n: the number of the value checked
 *
 * Return: Returns the value of index
*/

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index ; i++)
		n = n >> 1;
	return ((n & 1));
}
