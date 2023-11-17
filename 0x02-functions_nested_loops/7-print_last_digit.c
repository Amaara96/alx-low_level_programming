#include "main.h"

/**
  * _last_digit - A function that prints the last digit of a program
  *
  * @l: the integer in the program
  *
  * Description - This program is a printf function
  *
  * Return:  Always return 0
*/

int print_last_digit(int l);

{

int a;
if (l < 0)
l = -l;
a = l % 10;
if (a < 0)
a = -a;
_putchar(a + '0');
return (a);
}
