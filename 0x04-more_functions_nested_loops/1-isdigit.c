#include "main.h"

/**
 * _isdigit - code check if c is digit.
 * @c: int type
 * Return: 1 if c digit else 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <=57)
		return (1);
	else
		return (0);
}
