#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * sum_them_all - a function that sum all integers
 *
 * @n: the integer
 *
 * Return: returns the sum of the intergers or returns 0
*/

int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	unsigned int i;
	va_list arg;

	if (n == 0)
	{
		return (0);
	}

	else
	{
		va_start(arg, n);
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(arg, int);
		}
		va_end(arg);
	}
	return (sum);
}
