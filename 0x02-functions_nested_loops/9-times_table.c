#include "main.h"
#include <stdio.h>

/**
  * times_table - Prints 9 times table
  * Return - returns 0
  */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
				if (b == 0)
					printf("%d, ", c);
				else
				{
					printf("%2d", c);
					if (b != 9)
						printf(", ");
				}
		}
	printf("\n");
	}
}
