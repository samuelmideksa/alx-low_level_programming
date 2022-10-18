#include <stdio.h>
/**
 * main - print 0 1 2 3 4 5 6 7 8 9
 *
 * Return: zero
 */
int main(void)
{
	int digit;

	digit = 0;
	while (digit <= 9)
	{
		printf("%d\n", digit);
		digit++;
	}
	return (0);
}
