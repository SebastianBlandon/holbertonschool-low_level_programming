#include "main.h"
/**
 * _isalpha - isalpha.
 * @c: int variable input
 * Return: int function
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
