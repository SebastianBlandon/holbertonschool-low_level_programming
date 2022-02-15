#include "main.h"
/**
 * times_table - Print 9 timas table.
 * Return: void function
 */
void times_table(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			if (n1 * n2 <= 9)
			{
				_putchar(48 + n1 * n2);
			}
			else
			{
				_putchar(48 + n1 * n2 / 10);
				_putchar(48 + n1 * n2 % 10);
			}
			if (n2 < 9)
			{
				_putchar(44);
				if (n1 * (n2 + 1) < 10)
				{
					_putchar(32);
					_putchar(32);
				}
				else
					_putchar(32);
			}
		}
		_putchar(10);
	}
}
