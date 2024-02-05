#include "main.h"

/**
  * print_line - A function that draws a straight line in a terminal
  *
  * @n: This is the number of times the character _ is printed
  *
  * Return: The function always return to 0
  *
  */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		putchar('_');
	}
	putchar('\n');
}
