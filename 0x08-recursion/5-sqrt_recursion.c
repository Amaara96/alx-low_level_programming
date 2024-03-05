#include "main.h"
/**
 * _sqrt_recursion - A function that returns natural square root of an integer
 *
 * @n: This is the integer to be returned
 *
 * Return: int j
*/

int _sqrt_recursion(int n)
{
	return (_original_sqrt(n, 1));
}

/**
 * _original_sqrt - this is the recursive square root
 *
 * @n: this is the integer that is returned
 *
 * @j: This is the second integer to be returned
 *
 * Return: Returns _original_sqrt
 *
 */

int _original_sqrt(int n, int j)
{

	if (n < 0)
	{
		return (-1);
	}
	if ((j * j) > n)
	{
		return (-1);
	}
	if (j * j == n)
	{
		return (j);
	}
	return (_original_sqrt(n, j + 1));
}
