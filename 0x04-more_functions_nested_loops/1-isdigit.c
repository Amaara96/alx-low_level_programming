#include "main.h"

/**
  * _isdigit - A function that checks for a digit
  * @c: This is the variable that checks for digit
  * Return: This returns to 1 if is a digit hence 0
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
