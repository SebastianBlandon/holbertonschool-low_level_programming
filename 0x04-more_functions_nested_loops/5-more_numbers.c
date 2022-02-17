#include "main.h"
/**
 * more_numbers - Print numbers 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int i;

	for (i = 0; i < 10; i++)
	{
		c = 0;
		while (c <= 14)
		{
			if (c >= 10)
				_putchar(48 + c / 10);
			_putchar(48 + c % 10);
			c++;
		}
		_putchar(10);
	}
}
