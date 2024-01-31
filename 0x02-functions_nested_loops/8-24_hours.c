#include "main.h"

/**
* jack_bauer - prints every minute of the day spent by Jack Bauer
* The time starts from 00:00 to 23:59
*/

void jack_bauer(void)
{

	int i;
	int j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j / 10) + '0');
			_putchar('\n');
		j++;
		}
	i++;
	}
}
