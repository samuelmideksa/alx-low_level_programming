#include "main.h"

/**
  * _puts - print a string followed by a new line
  * @str: the string to be printed
  */

void _puts(char *str)
{
	while(*str)
		_putchar(*str);

	_putchar('\n');
}
