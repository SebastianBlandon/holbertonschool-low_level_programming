#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: unsigned long int input
 * @index: unsigned int input
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || index < 0 || !*n || !n)
		return (-1);

	*n >>= index;
	*n += 1;
	*n <<= index;
	return (1);
}
