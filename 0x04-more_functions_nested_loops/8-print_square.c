#include "main.h"

/**
  * print_square - prints a squeriseing charachter # on the terminal.
  * @size: size of the square.
  */

void print_square(int size)
{
	int hig, wid;

	if (size > 0)
	{
		for (hig = 0; hig < size; hig++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (hig == size - 1)
				continue;

			_putchar('\n');
		}

	}

	_putchar('\n');
}
