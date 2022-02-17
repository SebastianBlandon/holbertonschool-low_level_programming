#include "main.h"

/**
 * print_line - code print n aumount "_".
 * @n: int type
 * Return: void.
 */
void print_line(int n)
{
	int i = 0;
	
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
