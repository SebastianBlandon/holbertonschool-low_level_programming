#include "main.h"
/**
 * _isalpha - Return 1 if letter is alphebetic char, 0 if not.
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
