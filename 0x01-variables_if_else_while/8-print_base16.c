#include <stdio.h>
/**
  * main - A program that prints all numbers in base 16
  *
  * This program includes from number 0-9 and letters a-f
  *
  * Return: Always return to 0
*/
int main(void)
{
	int num;
		char letter;

			for (num = 0; num <= 9; num++)
				putchar((num % 10) + '0');

					for (letter = 'a'; letter <= 'f'; letter++)
						putchar(letter);

		putchar('\n');

	return (0);
}
