#include "main.h"

/**
  * strlen - return the length of a string
  * @s: the string
  *
  * Return: the length of the string
  */

int _strlen(char *s);
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
