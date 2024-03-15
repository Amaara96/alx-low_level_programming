#include <stdio.h>
/**
 * main - prints the number of arguments in a program
 *
 * @argc: The number of arguments
 *
 * @argv: The vector of the argument
 *
 * Return: returns the function to 0
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
