#include <stdlib.h>
#include "main.h"
/**
  * _calloc - allocates memory of an array using malloc.
  * @nmemb: number of elements in array.
  * @size: size of elements of array.
  *
  * Return: NULL is size or nmemb == 0.
  * NULL if malloc fails.
  * Pointer to memory allocated if successful.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char **output;

	if (nmemb == 0 || size == 0)
		return (NULL);

	output = calloc(nmemb, size);

	if (output == NULL)
		return (NULL);

	else
		return (output);
}
