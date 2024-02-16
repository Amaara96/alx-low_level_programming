#include "main.h"

/**
 * _puts_recursion - A function that prints string followed by a new line
 *
 * @s: This is the string that returns to char
 *
 * Return: The function returns to void
 *
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}

}
