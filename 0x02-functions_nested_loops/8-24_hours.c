#include "main.h"

/**
  * jack_bauer - print every minuet of jack bauer day
  *
  * Return: o always.
  */

int jack_bauer(int)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
	return (0);
}
	
