#include "main.h"
#include "_putchar.h"
/**
 * print_alphabet - Print alphabet x10 in lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i;
 
	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar(10);
	}
}
