#include <stdio.h>
/**
 * main - Prints all argument it recieves
 *
 * @argc: Argument Count
 *
 * @argv: Argument vector
 *
 * Return: returns to 0
*/

int main(int argc, char *argv[])
{

	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
