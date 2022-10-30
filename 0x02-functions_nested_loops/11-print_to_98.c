#include "main.h"
#include <stdio.h>

/**
  * print to 98 - Prints all natural numbers from input to 98,
  *		sepatated by a comma followed by a blank space.
  * @n: wehere counting starts form
  */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}

}
