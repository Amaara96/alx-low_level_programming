#include <stdio.h>
/**
  * main - A program that prints all single digit numbers
  *
  * The numbers are seperated by a comma symbol
  *
  * Return: Always return to 0
*/
int main(void)
{
	int num;

	for(num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		{
			if(num == 9)
			{
				continue;
			}	
			putchar(',');
					putchar(' ');

			}
		
	}
	
	putchar('\n');

	return (0);
}
