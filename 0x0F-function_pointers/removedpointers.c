#include <stdio.h>
// A normal function with an int parameter
// A void return type

void fun(int a)
{
	printf("Value of a is %d\n", a);
}

int main()
{
	void (*fun_ptr)(int) = fun; // &removed

	fun_ptr(10); // * removed

	return 0;
}
