#include <stdio.h>
/**
  * main - A program that prints lowercase alphabets
  * The program prints the alphabets in a backward manner
  * Return: Always return to 0
*/

int main(void)
{

	char letter;
	{
		for (letter = 'z'; letter >= 'a'; letter--)
		{
			putchar(letter);
		}
		putchar('\n');
	}
	return (0);
}
