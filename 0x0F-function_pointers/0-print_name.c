#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - the function prints a name
 * @name: The person's name
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
