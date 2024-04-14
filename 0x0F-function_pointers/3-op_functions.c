#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - select the option to perform arithmetic op
 * @s: operator argument
 *
 * Return: returns the result of the selected choice
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	/* initializes the variable i */
	i = 0;

	/* if s does not match the operand */

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f); /* returns the operation */
}
