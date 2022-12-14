#include "main.h"

/**
  * print_sign - prints the sign of a number
  * @n: number to be checked
  *
  * Return: 1 for positive numbers, 0 for 0 and
  * -1 for negative number
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
