#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n: this is the value of the factorial
 *
 * Return: The return value is 0, but is -1 when a negative number is indicated
*/

int factorial(int n)
{

	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
