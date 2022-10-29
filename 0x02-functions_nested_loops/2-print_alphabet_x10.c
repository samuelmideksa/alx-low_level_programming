#include "main.h"

/**
  * print_alphabet_x10 - print the alphabet ten times
  */

void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;

	while (count++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
