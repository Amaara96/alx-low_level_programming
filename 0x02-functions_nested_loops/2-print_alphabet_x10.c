#include "main.h"

/**
  * * print_alphabet_x10 - function prints alphabets times 10
  *  *
  *   * Return - 0
 */

void print_alphabet_x10(void)
{
	int b = 1;

		while (b <= 10)
			{
			char c = 'a';

				while (c <= 'z')
				{
					_putchar(c);
						c++;
				}
		_putchar('\n');
			b++;

		}

}
