#include "main.h"
/**
 * print_numbers - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
void print_numbers(void)
{
	char c = 48;

	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
