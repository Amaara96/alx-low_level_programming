#include "main.h"

/**
  * more_numbers - A function that prints from 0 to 14
  * Return: Always returns to 0
  */

void more_numbers(void)

{

	int a, b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
				putchar(b / 10 + '0');
			putchar(b % 10 + '0');
		}

	putchar('\n');

	}
}
