#include <stdio.h>
/**
 * main - print the alphabet in reverse
 *
 * Return: zero
 */
int main(void)
{
	int la;

	for (la = 'z'; la >= 'a'; la--)
	putchar(la);
	putchar('\n');
	return (0);
}
