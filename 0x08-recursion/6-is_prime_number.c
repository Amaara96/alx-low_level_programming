#include "main.h"

int tmp_prime(int n, int a);
/**
 * divide - checks the number if is prime
 * @n: the first number
 * @b: the second number
 * Return: returns either 0 || 1
*/

int divide(int n, int b)
{
	if (b % n == 0)
	{
		return (0);
	}
	else if (b / 2 > n)
	{
		return (divide(n + 2, b));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - The unction checks for prime numbers
 *
 * @n: This is the integer to be manipulated
 *
 * Return: The function returns 1 if is a prime number
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divide(3, n));
	}
}
