#include "main.h"

/**
  * _print_rev_recursion - This function prints the reverse of a string
  *
  * @s: This is the string value that is reversed
  *
  * Return: The return value is void
  *
  */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(s[0]);
	}
}
