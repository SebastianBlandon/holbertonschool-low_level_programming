#include "main.h"
#include <unistd.h>
/**
 * _puts - print a string
 * @s: pointer to char input
 * Return: len (Size s).
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
