#include "main.h"
/**
 * print_most_numbers - Print numbers using only `_putchar`
 * Return: void
 */
void print_most_numbers(void)
{
	char c = 48;

	while (c <= 57)
	{
		if (!(c == 50 || c == 52))
			_putchar(c);
		c++;
	}
	_putchar(10);
}
