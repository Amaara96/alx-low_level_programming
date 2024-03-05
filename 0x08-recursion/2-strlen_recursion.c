#include "main.h"

/**
 * _strlen_recursion - A function that returns the lenght of a string
 *
 * @s: The character of the string
 *
 * Return: The function retuyrns to 0
*/

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
