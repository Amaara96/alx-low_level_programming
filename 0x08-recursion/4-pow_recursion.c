#include "main.h"
/**
 * _pow_recursion - A function that returns a value of a power
 *
 * @x: this is the value of the number to be raised
 *
 * @y: this is the value of the power
 *
 * Return: the return value is 0
*/

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	return (0);
}
