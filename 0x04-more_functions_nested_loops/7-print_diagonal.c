#include "main.h"

/**
  * print_line - print line in the terminal
  * @n: umber of dash
  */

void print_diagonal(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('\');
	}

	_putchar('\n');
}
