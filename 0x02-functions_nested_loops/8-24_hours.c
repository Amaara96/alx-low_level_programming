#include "main.h"

/**
* jack_bauer - prints every minute of the day spent by Jack Bauer
* The time starts from 00:00 to 23:59
*/

void jack_bauer(void)
{

	int i;

	i = 0;
	while (i < 24)
	{
		(for int j = 0; j < 60; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar((':');
			putchar((j / 10) + '0');
			putchar((j / 10) + '0');
		}
	i++;
	}
}
