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
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 0, aux = n, base = 2;

	while (aux)
	{
		i++;
		aux >>= 1;
		if (!aux)
			break;
	}
	if (index > i)
		return (-1);

	--i;
	while (i >= 0)
	{
		aux = n >> i;
		if (i == index)
		{
			if (aux & 1)
				return (1);
			else
				return (0);
		}
		n -= _pow(base, i);
		i--;
	}
	return (-1);
}
