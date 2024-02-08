#include "main.h"

/**
 * puts_half - prints the second half of a string.
 *@str: string to use.
 */

void puts_half(char *str)
{
	int i; 
	int n;
	int count;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	n = (count - 1) / 2;

	for (i = n + 1 ; str[1] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

