#include "main.h"

/**
 * _pow - pows the two numbers
 * @base: unsigned int value input
 * @exp: unsigned int value input
 * Return: pow the two numbers
 */
unsigned long int _pow(unsigned long int base, unsigned long int exp)
{
	unsigned long int i;

	if (exp == 0)
		return (1);
	for (i = 1; i < exp; i++)
		base += base;
	return (base);
}
/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int input
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0, aux = n, aux2 = n, base = 2;

	if (!n)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (aux)
	{
		i++;
		aux >>= 1;
		if (!aux)
			break;
	}

	--i;
	while (i > 0)
	{
		aux = n >> i;
		if (aux & 1)
			_putchar('1');
		else
			_putchar('0');
		n -= _pow(base, i);
		i--;
	}
	if (aux2 & 1)
		_putchar('1');
	else
		_putchar('0');
}
