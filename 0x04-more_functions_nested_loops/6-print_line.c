#include "main.h"

/**
  * print_line - print line in the terminal
  * @n - number of dash
  */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len <= n; len++)
			_putchar('_');
	}

	_putchar(' ');
}
