#include "main.h"

/**
  * print_diagonal - Draws a diagonal line on the terminal
  * @n: This is the number of times the character is printed
  * Return: returns always to 0
  */

void print_diagonal(int n)
{

	int a;
	int i;

	for (a = 0; a < n; a++)
	{

		for (i = 0; i < a; i++)
		{
			putchar(' ');
		}

	putchar('\\');
	putchar('\n');
	}
	if (n <= 0)
	{
		putchar('\n');
	}
}
