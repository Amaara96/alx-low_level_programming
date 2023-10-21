#include <stdio.h>
/**
  * main - A program that prints only single numbers
  * Return: Always return to 0
*/
int main(void)
{
	int num;
	{
		for (num = 0; num <= 9; num++)
		{
			putchar('0' + num);
		}
		putchar('\n');
	}
	return (0);
}
