#include "main.h"

/**
 * print_triangle - code print "#" in triangle.
 * @size: int type
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j, sizein = size;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < sizein - 1)
					_putchar(' ');
				else
					_putchar('#');
			}
			sizein--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
