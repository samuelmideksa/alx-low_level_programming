#include "main.h"

/**
  * strlen - return the length of a string
  * @s: the string
  *
  * Return: the length of the string
  */

size_t strlen(const char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
