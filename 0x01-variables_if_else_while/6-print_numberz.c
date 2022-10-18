#include <stdio.h>
/**
 * main - print 0to9
 *
 * Return: zero
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	putchar(digit);
	putchar('\n');
	return (0);
}
