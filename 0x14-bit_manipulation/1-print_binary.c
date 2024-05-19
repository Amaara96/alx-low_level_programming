#include "main.h"

/**
 * print_bi - prints binary representation of a number
 *
 * @n: the decimal input
 *
 * Return: returns void
 */

void print_bi(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - prints the binary reprensentation of a number
 *
 * @n: This is the variable of the binary number
 *
 * Return: Returns the converted value
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bi(n);
	}
}


