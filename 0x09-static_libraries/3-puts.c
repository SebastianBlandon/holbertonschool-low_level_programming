#include "main.h"
/**
 * _puts - puts.
 * @s: pointer char array input
 * Return: void function
 */
void _puts(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar(10);
}
