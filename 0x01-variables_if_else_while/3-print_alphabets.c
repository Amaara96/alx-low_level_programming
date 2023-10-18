#include <stdio.h>
/**
  * main - a program that prints the uppercase and lowercase alphabets
  * followed by a newline
  * Return: Always return to 0
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar (ch);

		putchar('\n');

		return (0);
}
