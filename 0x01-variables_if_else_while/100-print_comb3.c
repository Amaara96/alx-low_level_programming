#include <stdio.h>
/**
  * main - A program that prints two digit numbers only
  *
  * The two digits numbers are seperated by a comma and space
  *
*/

int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 1; digit1 <= 9; digit1++)

		for (digit2 = digit1 + 1; digit < 10; digit2++)

			putchar((digit1 % 10) + '0');

					putchar((digit2 % 10) + '0');

						if(digit1 == 8 && digit2 == 9)
								continue;

							putchar(',');
								putchar(' ');



	putchar('\n');

	return (0);
}
