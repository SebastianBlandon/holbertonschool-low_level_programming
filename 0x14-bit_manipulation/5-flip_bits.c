#include "main.h"

/**
 * flip_bits - returns the number of bits
 *  you would need to flip to get from one number to another.
 * @n: unsigned long int input
 * @m: unsigned long int input
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _xor;
	unsigned int amount = 0;

	_xor = n ^ m;
	while (_xor)
	{
		if (_xor & 1)
			amount++;
		_xor >>= 1;
	}
	return (amount);
}
