#include "main.h"
/**
  * print asphabets- Writes a function that prints all alphabets
  *
  * Description - The alphabets are all lowercase
  *
  * Return - Always 0
  *
*/

void print_alphabet(void)
{

	char c = 'a';

	while (c <= 'z')
		{
			_putchar(c);

	
					c++;
		}

		_putchar('\n');

}
