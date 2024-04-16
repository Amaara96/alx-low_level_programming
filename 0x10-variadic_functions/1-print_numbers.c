#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - This function prints numbers with a newline
 *
 * @separator: This is the string
 *
 * @n: the number of integers passed to function
 *
 * Return: Returns nothing if seperator is NULL
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ar;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ar, int));

		if (separator != NULL && i != (n - 1)) /* the (n - 1) removes the comma. */
		{
			printf("%s", separator);
		}
	
	}
	putchar('\n');
	va_end(ar);
}
