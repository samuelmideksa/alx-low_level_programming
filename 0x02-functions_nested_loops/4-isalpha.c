#include "main.h"

/**
  * _isalpha - chechks for alphabetic character
  * @c: the character to be checked
  *
  * Return: 1 for alphabetic character,
  * 0 otherwise
  */

int _isalpha(int c)
{
	int c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
