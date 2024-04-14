#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - calculates the sum of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: returns the sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculates the difference of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: Returns the subtracted value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: First number to be multiplied
 * @b: Second number to be multiplied
 *
 *  Return: Returns the multiplied number
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: the dividend
 * @b: the divisor
 *
 *  Return: returns the quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - prints the remainder of the division
 * @a: The dividend
 * @b: The divisor
 *
 * Return: returns the remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
