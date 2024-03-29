#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Function adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: returns 0
 *
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (i);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);

	}
	return (0);

}
