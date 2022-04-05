#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: unsigned long int input
 * @index: unsigned int input
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux;

	if (index > 64)
		return (-1);

	aux = (1 << index);
	if (*n & aux)
		*n ^= aux;
	return (1);
}
