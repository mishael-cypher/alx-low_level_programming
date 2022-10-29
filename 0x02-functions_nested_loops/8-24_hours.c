#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Decription: This function prints every minute
 * 24 hours
 *
 * Return: void (nothing)
 */
void jack_bauer(void)
{
	int hour, minute;

	hour = 0;
	while (hour <= 23)
	{
		minute = 0;
		while (minute <= 59)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
			++minute;
		}
		++hour;
	}
}
