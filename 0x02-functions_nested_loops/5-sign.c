#include "main.h"

/**
  * print_sign - a function that prints n
  * @n: this is the number
  * Return: Always return 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
