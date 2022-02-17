#include "main.h"

/**
 * _isupper - code check if c is mayus.
 * @c: char type
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <=90)
		return (1);
	else
		return (0);
}
