#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every single minuteof the day
 * @void: null
 */
void jack_bauer(void)
{
	int hour;
	int mins;

	hour = 0;
	while (hour < 24)
	{
		mins = 0;
		while (mins < 60)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + mins / 10);
			_putchar('0' + mins % 10);
			_putchar('\n');
			mins++;
		}
	hour++;
	}
}


