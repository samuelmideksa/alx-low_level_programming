#include "main.h"

/**
  * print_numbers - print numbers 0123456789 followed by a new line
  * @n: numbers
  * Return: 0 always.
  */

int print_numbers(int n)
{
	for (n = 0; n <= 9; n++)
		_putchar((n % 10) + '0');

	_putchar('\n');

	return (0);
}
