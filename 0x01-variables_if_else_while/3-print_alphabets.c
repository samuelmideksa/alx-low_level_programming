#include <stdio.h>
/**
 * main - print the alphabet in lower case followed by in uppercase
 *
 * Return: zero
 */
int main(void)
{
	char al;

/* Print lowercase alphabet */
	for (al = 'a'; al <= 'z'; al++)
	putchar(al);
/* Print uppercase alphabet */
	for (al = 'A'; al <= 'Z'; al++)
	putchar(al);
	putchar('\n');
	return (0);
}
