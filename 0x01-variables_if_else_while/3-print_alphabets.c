#include <stdio.h>
/**
  * main - a program that prints the uppercase and lowercase alphabets
  * followed by a newline
  * Return: Always return to 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar (letter);

	putchar('\n');

	return (0);
}
