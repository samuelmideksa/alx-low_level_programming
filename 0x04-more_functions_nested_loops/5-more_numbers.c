#include "main.h"

/**
  * more_numbers - prints numbers from 0 to 14 ten times followed by a new line
  */

void more_numbers(void)
{
	int count = 0;

	while (count <= 9)
	{
		int n;

		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}

		_putchar('\n');

		count++;
	}
}
