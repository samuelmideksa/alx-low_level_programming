#include <stdio.h>

/**
 * main - print 00 to 99,separated by a comma
 * 	  and in ascending order
 *
 * Return: 0 always.
 */
int main (void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			putchar(',' + ' ');
		}
	}
	putchar('\n');
	return (0);
}
