#include <stdio.h>

/**
  * main - A function that calculates the largest prime numbers
  *
  * Return: Returns always to 0
  *
  */

int main(void)
{

	long int x = 612852475143;
	long int y;

	for (y = 2; y < x; y++)
	{
		if (x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%ld\n", y);
	return (0);
}
