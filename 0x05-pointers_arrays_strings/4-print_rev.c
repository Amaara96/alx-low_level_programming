#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */

void print_rev(char *s)
{

	int a;
	int b;

	for (b = 0; s[b] != '\0'; b++)
		a++;
	for (a = b - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
