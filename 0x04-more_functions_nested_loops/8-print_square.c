#include "main.h"

/**
  * print_square - A function that prints a square
  *
  * @size: This is the size of the square
  *
  * Return: returns void
  *
  */

void print_square(int size)

{

	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	if (size <= 0)
	{
		putchar('\n');
	}

}
