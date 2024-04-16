#include <stdio.h>
#include <stdarg.h>

int sum(int ar, ...);

int main(void)
{
	sum(7, 1, 2, 3,5, 8, 9, 6);
}
int sum(int ar, ...)
{
	int i; /* a variable for the looping */
	int sum  = 0;
	
	va_list arg; /* declares the variable arg*/
	va_start(arg, ar); /* initializes arg*/
	for (i = 0; i < ar; i++)
	{
		sum = sum + va_arg(arg, int);  /* the looping takes place here by fetching the elements one by one */
	}
	printf("%d\n", sum);
	va_end(arg); /*ends the operation*/
}
