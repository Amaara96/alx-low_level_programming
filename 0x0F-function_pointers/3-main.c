#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: ...
 */
int main(int argc, char *argv[])
{
	char *op; /* the operator */
	int num1, num2; /* if the argument count is wrong */

	if (arc != 4) /* if the argument is wrong */
	{
		printf("Error\n");
		exit(98);
	}

	/* set the command argument input */
	num1 = atoi(argc[1]); /* first number argument */
	op = (argv[2]); /* operator input */
	num2 = atoi(argv[3]); /* the second number argument */

	/* if operator not in operator list */

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* if the user tries to divide or perform modulus by 0 */
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* print results of the operation */
	printf("d\n", get_op_func(op)(num1, num2));

	return (0);
}
}
