#include <stdio.h>
/**
 * main - print the alphabet but e and q
 *
 * Return: o
 */
int main(void)
{
	char al;

	al = 'a';
	while (al <= 'z')
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
		al++
	}
	putchar('\n');
	return (0);
}
