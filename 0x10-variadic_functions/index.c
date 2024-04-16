#include <stdio.h>
#include <stdarg.h>

sum(2, 3, 4)
int sum(int arg, ...);

int sum(int arg, ...)
{
	va_list arguments; /* holds declared variables*/
	va_start(arguments, arg);/* initializes declared variables*/
	va_arg(argument, int); /* loops the entire argument passed in the function*/
	va_end(argument); /*terminates the va_arg, thats the end*/
}
