#include "main.h"
/**
 * puts2 - A function that prints even numbers only
 *
 * @str: This is the value of the string
 *
 * Return: The return function is void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
