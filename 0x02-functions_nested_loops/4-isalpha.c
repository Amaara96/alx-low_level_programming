#include "main.h"

/**
  * _isalpha -  checks the code for ALX students
  *
  * Description: The code checks for alphabets only
  *
  * @c: the letter must either be uppercase or lowercase
  *
  * Return:  Always return to 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90) 
		return (1);
	else
		return (0);
}
