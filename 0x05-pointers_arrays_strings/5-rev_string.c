#include "main.h"

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */

void rev_string(char *s)
{
	int i;
	int string = 0;
	char j;

	for (i = 0; s[i] != '\0'; i++)
		string++;
	for (i = 0; i < string / 2; i++)
	{
		j = s[i];
		s[i] = s[string - 1 - i];
		s[string - 1 - i] = j;
	}
}
