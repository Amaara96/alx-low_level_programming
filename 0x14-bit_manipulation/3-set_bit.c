#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @index: The pointer to the number
 *
 * @n: The number n
 *
 * Return: returns the function
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
