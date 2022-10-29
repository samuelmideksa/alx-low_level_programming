#include "main.h"
/**
  * int _islower - checks if c is lowercase
  * @c: the c to be checked
  *
  * Return: 1 if c is lowercase
  * 0 otherwise
  */

int int_islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
