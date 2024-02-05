#include "main.h"

/**
  * print_most_numbers - This is a function that prints numbers
  * Return: returns always to 0
  */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(i + '0');
		}
	}
	putchar('\n');

}
