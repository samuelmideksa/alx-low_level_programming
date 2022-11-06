#include "main.h"

/**
  * print_triangle - prints a triangle followed by a new line
  * @size: size of the triangle
  */

void print_triangle(int size)
{
	int hig, wid;

	if (size > 0)
	{
		for (hig = 1; hig <= size; hig++)
		{
			for (wid = size - hig; wid > 0; wid--)
				_putchar(' ');

			for (wid = 0; wid < hig; wid++)
				_putchar('#');

			if (hig == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
