#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 * Copyright : Krishan Kumar : https://www.facebook.com/whoiskk
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char*) &x;

	if (*c == 0x10)
		return (1);
	else
		return (0);
}
