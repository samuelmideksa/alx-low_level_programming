#include "main.h"
#include <unistd.h>

/**
 * main - print c to standard output
 * @c: The character to print
 *
 * Return: on success 1
 * on error, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
