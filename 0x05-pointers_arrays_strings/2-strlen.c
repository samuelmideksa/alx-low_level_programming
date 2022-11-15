#include "main.h"

/**
  * strlen - return the length of a string
  * @s: the string
  *
  * Return: the length of the string
  */

long unsigned int strlen(const char *s)
{
	long unsigned int length = 0;

	while (*s++)
		length++;

	return (length);
}
