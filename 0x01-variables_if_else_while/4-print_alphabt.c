#include <stdio.h>
/**
  * main - A program that prints all alphabet except for letters e and q
  * Return: Always return to 0
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{

		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
