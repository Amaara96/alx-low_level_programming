#include <stdio.h>

// A program that illustrates the break function in C programming //

int main(void)

{

	int n;
	printf("Enter a number\n");
	scanf("%d", &n);

	while (n != 0)
	{
		if(n < 0)
			break;
		printf("Enter a number\n");
		scanf("%d", &n);
	}
}
