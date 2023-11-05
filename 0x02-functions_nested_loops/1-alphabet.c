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

	char l = 'a';

	while (l <= 'z')
		{
			_putchar(l);

		}
		
		l++;

	_putchar('\n');

}
