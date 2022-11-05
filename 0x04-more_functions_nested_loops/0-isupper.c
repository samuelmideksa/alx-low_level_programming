#include "main.h"

/**
  * _isupper - checks for upper case charachter
  * @c: The charachter to be checked
  * Return: 1 for uppercase charachter, 0 for else.
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
