#include <stdio.h>

// A program that illustrates the continue statement //

int main(void)
{
	int i;
	int n = 2;

	for (i = 1; i <= 20; i++)
	{
		if(i == n)
		{
			n = n + 2;
			continue;
		}
		printf("%d ", i);
	}
}
