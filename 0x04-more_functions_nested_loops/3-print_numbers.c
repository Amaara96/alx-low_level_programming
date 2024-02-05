#include "main.h"

/**
  * print_numbers - A function that prints all numbers from 0 to 9
  * Return: returns to 0
  */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)

		putchar(i + '0');

	putchar('\n');
}
